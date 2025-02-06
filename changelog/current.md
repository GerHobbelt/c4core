- [PR#147](https://github.com/biojppm/c4core/pull/147): Add utf utilities:
  - `c4::first_non_bom()`
  - `c4::get_bom()`
  - `c4::skip_bom()`
- [PR#148](https://github.com/biojppm/c4core/pull/148): Improvements in dump.hpp:
  - add traits class `c4::dump_directly<T>` to enable selection of faster path where the intermediate dump buffer is not used for strings which can be directly dumped to the sink
  - improve `c4::format_dump_resume()` to ensure the needed buffer size is still computed after buffer exhaustion 
- [PR#148](https://github.com/biojppm/c4core/pull/148): Add support for mips, mipsel, mips64, mips64el CPU architectures
- [PR#148](https://github.com/biojppm/c4core/pull/148): Add support for sparc, sparc64 CPU architectures
- [PR#148](https://github.com/biojppm/c4core/pull/148) and [PR#12 cmake](https://github.com/biojppm/cmake/pull/12): Add support for loongarch, loongarch64 architectures
- [PR#148](https://github.com/biojppm/c4core/pull/148): Improve CPU detection in armv4 and armv5
- Minor improvements to doxygen documentation


### Thanks

- @huajingyun01
