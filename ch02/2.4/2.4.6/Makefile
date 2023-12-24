target01 :
	echo $@

target02 : A B C
	echo $<

target03 : A B C
	echo $^

target04 : prerequire
	#cat prerequire > target04
	cat $< > $@
