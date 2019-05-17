// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/echo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fecho_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fecho_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fecho_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fecho_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fecho_2eproto;
namespace echo {
class echoMsg;
class echoMsgDefaultTypeInternal;
extern echoMsgDefaultTypeInternal _echoMsg_default_instance_;
class pingMsg;
class pingMsgDefaultTypeInternal;
extern pingMsgDefaultTypeInternal _pingMsg_default_instance_;
}  // namespace echo
PROTOBUF_NAMESPACE_OPEN
template<> ::echo::echoMsg* Arena::CreateMaybeMessage<::echo::echoMsg>(Arena*);
template<> ::echo::pingMsg* Arena::CreateMaybeMessage<::echo::pingMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace echo {

// ===================================================================

class echoMsg :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:echo.echoMsg) */ {
 public:
  echoMsg();
  virtual ~echoMsg();

  echoMsg(const echoMsg& from);
  echoMsg(echoMsg&& from) noexcept
    : echoMsg() {
    *this = ::std::move(from);
  }

  inline echoMsg& operator=(const echoMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline echoMsg& operator=(echoMsg&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const echoMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const echoMsg* internal_default_instance() {
    return reinterpret_cast<const echoMsg*>(
               &_echoMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(echoMsg* other);
  friend void swap(echoMsg& a, echoMsg& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline echoMsg* New() const final {
    return CreateMaybeMessage<echoMsg>(nullptr);
  }

  echoMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<echoMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const echoMsg& from);
  void MergeFrom(const echoMsg& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(echoMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "echo.echoMsg";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fecho_2eproto);
    return ::descriptor_table_proto_2fecho_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string msgId = 1;
  bool has_msgid() const;
  void clear_msgid();
  static const int kMsgIdFieldNumber = 1;
  const std::string& msgid() const;
  void set_msgid(const std::string& value);
  void set_msgid(std::string&& value);
  void set_msgid(const char* value);
  void set_msgid(const char* value, size_t size);
  std::string* mutable_msgid();
  std::string* release_msgid();
  void set_allocated_msgid(std::string* msgid);

  // required string nickName = 3;
  bool has_nickname() const;
  void clear_nickname();
  static const int kNickNameFieldNumber = 3;
  const std::string& nickname() const;
  void set_nickname(const std::string& value);
  void set_nickname(std::string&& value);
  void set_nickname(const char* value);
  void set_nickname(const char* value, size_t size);
  std::string* mutable_nickname();
  std::string* release_nickname();
  void set_allocated_nickname(std::string* nickname);

  // required string msgInfo = 4;
  bool has_msginfo() const;
  void clear_msginfo();
  static const int kMsgInfoFieldNumber = 4;
  const std::string& msginfo() const;
  void set_msginfo(const std::string& value);
  void set_msginfo(std::string&& value);
  void set_msginfo(const char* value);
  void set_msginfo(const char* value, size_t size);
  std::string* mutable_msginfo();
  std::string* release_msginfo();
  void set_allocated_msginfo(std::string* msginfo);

  // required string charset = 5;
  bool has_charset() const;
  void clear_charset();
  static const int kCharsetFieldNumber = 5;
  const std::string& charset() const;
  void set_charset(const std::string& value);
  void set_charset(std::string&& value);
  void set_charset(const char* value);
  void set_charset(const char* value, size_t size);
  std::string* mutable_charset();
  std::string* release_charset();
  void set_allocated_charset(std::string* charset);

  // required int32 ctime = 2;
  bool has_ctime() const;
  void clear_ctime();
  static const int kCtimeFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::int32 ctime() const;
  void set_ctime(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:echo.echoMsg)
 private:
  class HasBitSetters;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msgid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr nickname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msginfo_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr charset_;
  ::PROTOBUF_NAMESPACE_ID::int32 ctime_;
  friend struct ::TableStruct_proto_2fecho_2eproto;
};
// -------------------------------------------------------------------

class pingMsg :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:echo.pingMsg) */ {
 public:
  pingMsg();
  virtual ~pingMsg();

  pingMsg(const pingMsg& from);
  pingMsg(pingMsg&& from) noexcept
    : pingMsg() {
    *this = ::std::move(from);
  }

  inline pingMsg& operator=(const pingMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline pingMsg& operator=(pingMsg&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const pingMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const pingMsg* internal_default_instance() {
    return reinterpret_cast<const pingMsg*>(
               &_pingMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(pingMsg* other);
  friend void swap(pingMsg& a, pingMsg& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline pingMsg* New() const final {
    return CreateMaybeMessage<pingMsg>(nullptr);
  }

  pingMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<pingMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const pingMsg& from);
  void MergeFrom(const pingMsg& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(pingMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "echo.pingMsg";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fecho_2eproto);
    return ::descriptor_table_proto_2fecho_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool ret = 1;
  bool has_ret() const;
  void clear_ret();
  static const int kRetFieldNumber = 1;
  bool ret() const;
  void set_ret(bool value);

  // @@protoc_insertion_point(class_scope:echo.pingMsg)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  bool ret_;
  friend struct ::TableStruct_proto_2fecho_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// echoMsg

// required string msgId = 1;
inline bool echoMsg::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void echoMsg::clear_msgid() {
  msgid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& echoMsg::msgid() const {
  // @@protoc_insertion_point(field_get:echo.echoMsg.msgId)
  return msgid_.GetNoArena();
}
inline void echoMsg::set_msgid(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  msgid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:echo.echoMsg.msgId)
}
inline void echoMsg::set_msgid(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  msgid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:echo.echoMsg.msgId)
}
inline void echoMsg::set_msgid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  msgid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:echo.echoMsg.msgId)
}
inline void echoMsg::set_msgid(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  msgid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:echo.echoMsg.msgId)
}
inline std::string* echoMsg::mutable_msgid() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:echo.echoMsg.msgId)
  return msgid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* echoMsg::release_msgid() {
  // @@protoc_insertion_point(field_release:echo.echoMsg.msgId)
  if (!has_msgid()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return msgid_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void echoMsg::set_allocated_msgid(std::string* msgid) {
  if (msgid != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  msgid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msgid);
  // @@protoc_insertion_point(field_set_allocated:echo.echoMsg.msgId)
}

// required int32 ctime = 2;
inline bool echoMsg::has_ctime() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void echoMsg::clear_ctime() {
  ctime_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 echoMsg::ctime() const {
  // @@protoc_insertion_point(field_get:echo.echoMsg.ctime)
  return ctime_;
}
inline void echoMsg::set_ctime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  ctime_ = value;
  // @@protoc_insertion_point(field_set:echo.echoMsg.ctime)
}

// required string nickName = 3;
inline bool echoMsg::has_nickname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void echoMsg::clear_nickname() {
  nickname_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& echoMsg::nickname() const {
  // @@protoc_insertion_point(field_get:echo.echoMsg.nickName)
  return nickname_.GetNoArena();
}
inline void echoMsg::set_nickname(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  nickname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:echo.echoMsg.nickName)
}
inline void echoMsg::set_nickname(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  nickname_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:echo.echoMsg.nickName)
}
inline void echoMsg::set_nickname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  nickname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:echo.echoMsg.nickName)
}
inline void echoMsg::set_nickname(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  nickname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:echo.echoMsg.nickName)
}
inline std::string* echoMsg::mutable_nickname() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:echo.echoMsg.nickName)
  return nickname_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* echoMsg::release_nickname() {
  // @@protoc_insertion_point(field_release:echo.echoMsg.nickName)
  if (!has_nickname()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return nickname_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void echoMsg::set_allocated_nickname(std::string* nickname) {
  if (nickname != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  nickname_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), nickname);
  // @@protoc_insertion_point(field_set_allocated:echo.echoMsg.nickName)
}

// required string msgInfo = 4;
inline bool echoMsg::has_msginfo() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void echoMsg::clear_msginfo() {
  msginfo_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& echoMsg::msginfo() const {
  // @@protoc_insertion_point(field_get:echo.echoMsg.msgInfo)
  return msginfo_.GetNoArena();
}
inline void echoMsg::set_msginfo(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  msginfo_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:echo.echoMsg.msgInfo)
}
inline void echoMsg::set_msginfo(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  msginfo_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:echo.echoMsg.msgInfo)
}
inline void echoMsg::set_msginfo(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  msginfo_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:echo.echoMsg.msgInfo)
}
inline void echoMsg::set_msginfo(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  msginfo_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:echo.echoMsg.msgInfo)
}
inline std::string* echoMsg::mutable_msginfo() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:echo.echoMsg.msgInfo)
  return msginfo_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* echoMsg::release_msginfo() {
  // @@protoc_insertion_point(field_release:echo.echoMsg.msgInfo)
  if (!has_msginfo()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return msginfo_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void echoMsg::set_allocated_msginfo(std::string* msginfo) {
  if (msginfo != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  msginfo_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msginfo);
  // @@protoc_insertion_point(field_set_allocated:echo.echoMsg.msgInfo)
}

// required string charset = 5;
inline bool echoMsg::has_charset() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void echoMsg::clear_charset() {
  charset_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000008u;
}
inline const std::string& echoMsg::charset() const {
  // @@protoc_insertion_point(field_get:echo.echoMsg.charset)
  return charset_.GetNoArena();
}
inline void echoMsg::set_charset(const std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  charset_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:echo.echoMsg.charset)
}
inline void echoMsg::set_charset(std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  charset_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:echo.echoMsg.charset)
}
inline void echoMsg::set_charset(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  charset_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:echo.echoMsg.charset)
}
inline void echoMsg::set_charset(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000008u;
  charset_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:echo.echoMsg.charset)
}
inline std::string* echoMsg::mutable_charset() {
  _has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_mutable:echo.echoMsg.charset)
  return charset_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* echoMsg::release_charset() {
  // @@protoc_insertion_point(field_release:echo.echoMsg.charset)
  if (!has_charset()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return charset_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void echoMsg::set_allocated_charset(std::string* charset) {
  if (charset != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  charset_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), charset);
  // @@protoc_insertion_point(field_set_allocated:echo.echoMsg.charset)
}

// -------------------------------------------------------------------

// pingMsg

// required bool ret = 1;
inline bool pingMsg::has_ret() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void pingMsg::clear_ret() {
  ret_ = false;
  _has_bits_[0] &= ~0x00000001u;
}
inline bool pingMsg::ret() const {
  // @@protoc_insertion_point(field_get:echo.pingMsg.ret)
  return ret_;
}
inline void pingMsg::set_ret(bool value) {
  _has_bits_[0] |= 0x00000001u;
  ret_ = value;
  // @@protoc_insertion_point(field_set:echo.pingMsg.ret)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace echo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fecho_2eproto