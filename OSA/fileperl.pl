open(FILE, "<file.pl") or die "Could not open file: $!";

$lines=0;
$words=0;
$chars =0;
$same=0;
while (<FILE>) {
    $lines++;
    $chars += length($_);
    $words += scalar(split(/\s+/, $_));

}

print("lines=$lines words=$words chars=$chars\n");



open(FILE, "<a.txt") or die "Could not open file: $!";

while (<FILE>) {
    while ( /(['\w]\w)/g ) {             
        $WORDS{$1}++;    #it will store increment as value 
    }				# lc for lower case a value
}
#first do comparisoin for each key value and then sort it 
#then make comparison 
foreach my $word ( sort { $WORDS{$b} <=> $WORDS{$a} } keys %WORDS) {
    printf "%5d %s\n", $WORDS{$word}, $word;
}
