# style_cleaner
Demonstrates using Artistic Style (astyle) to beautify code when staged for commit.

Note that this process only works for astyle versions 2.04 or greater.
On Ubuntu 14.04, this means that you will need to install the backported version:

	sudo apt-get install astyle/trusty-backports

To use the included filters, you will need to point your local git config file at the versioned .gitconfig.
If your local config file is in the usual location (`.git/config`), add these lines to include the styling filters:

	[include]
    	path = ../.gitconfig

When you call `git add` on a file, it checks the filename against the filters defined in the `.gitattributes` file.
In this example, it will match `src/test1.cpp` with the `*.cpp filter=cppstyle` line, so it will apply the `cppstyle` filter when checking the file in or out.

If you look at the `smudge` part of the filter, you will notice that it only calls astyle without any arguments.
This is because you can define an astyle config file at `~/.astylerc` that will set up your personal preferences.
