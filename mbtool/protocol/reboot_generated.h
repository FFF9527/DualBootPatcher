// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_REBOOT_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_REBOOT_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

#include "file_chmod_generated.h"
#include "file_close_generated.h"
#include "file_open_generated.h"
#include "file_read_generated.h"
#include "file_seek_generated.h"
#include "file_selinux_get_label_generated.h"
#include "file_selinux_set_label_generated.h"
#include "file_stat_generated.h"
#include "file_write_generated.h"
#include "mb_get_booted_rom_id_generated.h"
#include "mb_get_installed_roms_generated.h"
#include "mb_get_version_generated.h"
#include "mb_set_kernel_generated.h"
#include "mb_switch_rom_generated.h"
#include "mb_wipe_rom_generated.h"
#include "path_chmod_generated.h"
#include "path_copy_generated.h"
#include "path_selinux_get_label_generated.h"
#include "path_selinux_set_label_generated.h"

namespace mbtool {
namespace daemon {
namespace v3 {
struct FileChmodRequest;
struct FileChmodResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileCloseRequest;
struct FileCloseResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileOpenRequest;
struct FileOpenResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileReadRequest;
struct FileReadResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileSeekRequest;
struct FileSeekResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct StructStat;
struct FileStatRequest;
struct FileStatResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileWriteRequest;
struct FileWriteResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileSELinuxGetLabelRequest;
struct FileSELinuxGetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileSELinuxSetLabelRequest;
struct FileSELinuxSetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathChmodRequest;
struct PathChmodResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathCopyRequest;
struct PathCopyResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathSELinuxGetLabelRequest;
struct PathSELinuxGetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathSELinuxSetLabelRequest;
struct PathSELinuxSetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbGetVersionRequest;
struct MbGetVersionResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbRom;
struct MbGetInstalledRomsRequest;
struct MbGetInstalledRomsResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbGetBootedRomIdRequest;
struct MbGetBootedRomIdResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbSwitchRomRequest;
struct MbSwitchRomResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbSetKernelRequest;
struct MbSetKernelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbWipeRomRequest;
struct MbWipeRomResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v3 {

struct RebootRequest;
struct RebootResponse;

struct RebootRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *arg() const { return GetPointer<const flatbuffers::String *>(4); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* arg */) &&
           verifier.Verify(arg()) &&
           verifier.EndTable();
  }
};

struct RebootRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_arg(flatbuffers::Offset<flatbuffers::String> arg) { fbb_.AddOffset(4, arg); }
  RebootRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  RebootRequestBuilder &operator=(const RebootRequestBuilder &);
  flatbuffers::Offset<RebootRequest> Finish() {
    auto o = flatbuffers::Offset<RebootRequest>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<RebootRequest> CreateRebootRequest(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> arg = 0) {
  RebootRequestBuilder builder_(_fbb);
  builder_.add_arg(arg);
  return builder_.Finish();
}

struct RebootResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint8_t success() const { return GetField<uint8_t>(4, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, 4 /* success */) &&
           verifier.EndTable();
  }
};

struct RebootResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(uint8_t success) { fbb_.AddElement<uint8_t>(4, success, 0); }
  RebootResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  RebootResponseBuilder &operator=(const RebootResponseBuilder &);
  flatbuffers::Offset<RebootResponse> Finish() {
    auto o = flatbuffers::Offset<RebootResponse>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<RebootResponse> CreateRebootResponse(flatbuffers::FlatBufferBuilder &_fbb,
   uint8_t success = 0) {
  RebootResponseBuilder builder_(_fbb);
  builder_.add_success(success);
  return builder_.Finish();
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_REBOOT_MBTOOL_DAEMON_V3_H_
