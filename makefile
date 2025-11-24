compile:
	verilator --trace --binary src/*.v # --top-module main
run:
	./obj_dir/VSDRAM
wave:
	gtkwave wave.vcd

compile_and_run: compile run
compile_and_run_wave: compile run wave
run_and_wave: run wave