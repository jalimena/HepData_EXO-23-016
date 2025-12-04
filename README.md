To add to this HepData record:
1. Modify `createHepData_all.py` to include your figures. See examples in that file of what to do, or check the HepData documentation.
2. Add root files containing your histograms, as well as .C files and .pdf files of your plots in a new folder called "data_YOURNAME"
3. Run `python3 createHepData_all.py` to create the submission tarball ("submission.tar.gz"). You can download this tarball and then upload it in your sandbox (https://www.hepdata.net/record/sandbox) to check that the record is as you intended.
4. When you are happy, create a PR to this repo, so we can merge your changes.
