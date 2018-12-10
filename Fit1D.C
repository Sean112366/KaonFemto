
void
Fit1D(TString filename)
{
  std::cout << "Fitting 1D\n";
  std::cout << " file: " << filename << "\n";

  auto tfile = TFile::Open(filename, "READ");
  if (!tfile) {
    return;
  }

}
