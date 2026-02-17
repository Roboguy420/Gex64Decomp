if [ $# -eq 0 ];
then
    grep -c ^ asm/nonmatchings/*/func_*.s | awk '{print $2"\t"$1}' FS=":" | sort -n > linecounts.txt
else
    grep -c ^ asm/nonmatchings/_$1/func_*.s | awk '{print $2"\t"$1}' FS=":" | sort -n > linecounts.txt
fi