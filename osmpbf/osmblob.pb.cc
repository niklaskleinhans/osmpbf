// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osmblob.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "osmblob.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* BlobHeader_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BlobHeader_reflection_ = NULL;
const ::google::protobuf::Descriptor* Blob_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Blob_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_osmblob_2eproto() {
  protobuf_AddDesc_osmblob_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "osmblob.proto");
  GOOGLE_CHECK(file != NULL);
  BlobHeader_descriptor_ = file->message_type(0);
  static const int BlobHeader_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, indexdata_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, datasize_),
  };
  BlobHeader_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BlobHeader_descriptor_,
      BlobHeader::default_instance_,
      BlobHeader_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, _has_bits_[0]),
      -1,
      -1,
      sizeof(BlobHeader),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, _internal_metadata_),
      -1);
  Blob_descriptor_ = file->message_type(1);
  static const int Blob_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, raw_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, raw_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, zlib_data_),
  };
  Blob_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Blob_descriptor_,
      Blob::default_instance_,
      Blob_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, _has_bits_[0]),
      -1,
      -1,
      sizeof(Blob),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_osmblob_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BlobHeader_descriptor_, &BlobHeader::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Blob_descriptor_, &Blob::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_osmblob_2eproto() {
  delete BlobHeader::default_instance_;
  delete BlobHeader_reflection_;
  delete Blob::default_instance_;
  delete Blob_reflection_;
}

void protobuf_AddDesc_osmblob_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rosmblob.proto\"\?\n\nBlobHeader\022\014\n\004type\030\001 "
    "\002(\t\022\021\n\tindexdata\030\002 \001(\014\022\020\n\010datasize\030\003 \002(\005"
    "\"8\n\004Blob\022\013\n\003raw\030\001 \001(\014\022\020\n\010raw_size\030\002 \001(\005\022"
    "\021\n\tzlib_data\030\003 \001(\014", 138);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "osmblob.proto", &protobuf_RegisterTypes);
  BlobHeader::default_instance_ = new BlobHeader();
  Blob::default_instance_ = new Blob();
  BlobHeader::default_instance_->InitAsDefaultInstance();
  Blob::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_osmblob_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_osmblob_2eproto {
  StaticDescriptorInitializer_osmblob_2eproto() {
    protobuf_AddDesc_osmblob_2eproto();
  }
} static_descriptor_initializer_osmblob_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BlobHeader::kTypeFieldNumber;
const int BlobHeader::kIndexdataFieldNumber;
const int BlobHeader::kDatasizeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BlobHeader::BlobHeader()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:BlobHeader)
}

void BlobHeader::InitAsDefaultInstance() {
}

BlobHeader::BlobHeader(const BlobHeader& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:BlobHeader)
}

void BlobHeader::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  indexdata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  datasize_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BlobHeader::~BlobHeader() {
  // @@protoc_insertion_point(destructor:BlobHeader)
  SharedDtor();
}

void BlobHeader::SharedDtor() {
  type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  indexdata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void BlobHeader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BlobHeader::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BlobHeader_descriptor_;
}

const BlobHeader& BlobHeader::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_osmblob_2eproto();
  return *default_instance_;
}

BlobHeader* BlobHeader::default_instance_ = NULL;

BlobHeader* BlobHeader::New(::google::protobuf::Arena* arena) const {
  BlobHeader* n = new BlobHeader;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BlobHeader::Clear() {
// @@protoc_insertion_point(message_clear_start:BlobHeader)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_type()) {
      type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_indexdata()) {
      indexdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    datasize_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool BlobHeader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:BlobHeader)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string type = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->type().data(), this->type().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "BlobHeader.type");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_indexdata;
        break;
      }

      // optional bytes indexdata = 2;
      case 2: {
        if (tag == 18) {
         parse_indexdata:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_indexdata()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_datasize;
        break;
      }

      // required int32 datasize = 3;
      case 3: {
        if (tag == 24) {
         parse_datasize:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &datasize_)));
          set_has_datasize();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:BlobHeader)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:BlobHeader)
  return false;
#undef DO_
}

void BlobHeader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:BlobHeader)
  // required string type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "BlobHeader.type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->type(), output);
  }

  // optional bytes indexdata = 2;
  if (has_indexdata()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->indexdata(), output);
  }

  // required int32 datasize = 3;
  if (has_datasize()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->datasize(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:BlobHeader)
}

::google::protobuf::uint8* BlobHeader::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:BlobHeader)
  // required string type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "BlobHeader.type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->type(), target);
  }

  // optional bytes indexdata = 2;
  if (has_indexdata()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->indexdata(), target);
  }

  // required int32 datasize = 3;
  if (has_datasize()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->datasize(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BlobHeader)
  return target;
}

int BlobHeader::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:BlobHeader)
  int total_size = 0;

  if (has_type()) {
    // required string type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type());
  }

  if (has_datasize()) {
    // required int32 datasize = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->datasize());
  }

  return total_size;
}
int BlobHeader::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:BlobHeader)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000005) ^ 0x00000005) == 0) {  // All required fields are present.
    // required string type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type());

    // required int32 datasize = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->datasize());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional bytes indexdata = 2;
  if (has_indexdata()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->indexdata());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BlobHeader::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:BlobHeader)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const BlobHeader* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BlobHeader>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:BlobHeader)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:BlobHeader)
    MergeFrom(*source);
  }
}

void BlobHeader::MergeFrom(const BlobHeader& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:BlobHeader)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_has_type();
      type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
    }
    if (from.has_indexdata()) {
      set_has_indexdata();
      indexdata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.indexdata_);
    }
    if (from.has_datasize()) {
      set_datasize(from.datasize());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void BlobHeader::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:BlobHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BlobHeader::CopyFrom(const BlobHeader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BlobHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlobHeader::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;

  return true;
}

void BlobHeader::Swap(BlobHeader* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BlobHeader::InternalSwap(BlobHeader* other) {
  type_.Swap(&other->type_);
  indexdata_.Swap(&other->indexdata_);
  std::swap(datasize_, other->datasize_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BlobHeader::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BlobHeader_descriptor_;
  metadata.reflection = BlobHeader_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BlobHeader

// required string type = 1;
bool BlobHeader::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void BlobHeader::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
void BlobHeader::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void BlobHeader::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_type();
}
 const ::std::string& BlobHeader::type() const {
  // @@protoc_insertion_point(field_get:BlobHeader.type)
  return type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BlobHeader::set_type(const ::std::string& value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:BlobHeader.type)
}
 void BlobHeader::set_type(const char* value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:BlobHeader.type)
}
 void BlobHeader::set_type(const char* value, size_t size) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:BlobHeader.type)
}
 ::std::string* BlobHeader::mutable_type() {
  set_has_type();
  // @@protoc_insertion_point(field_mutable:BlobHeader.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* BlobHeader::release_type() {
  // @@protoc_insertion_point(field_release:BlobHeader.type)
  clear_has_type();
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BlobHeader::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    set_has_type();
  } else {
    clear_has_type();
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:BlobHeader.type)
}

// optional bytes indexdata = 2;
bool BlobHeader::has_indexdata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void BlobHeader::set_has_indexdata() {
  _has_bits_[0] |= 0x00000002u;
}
void BlobHeader::clear_has_indexdata() {
  _has_bits_[0] &= ~0x00000002u;
}
void BlobHeader::clear_indexdata() {
  indexdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_indexdata();
}
 const ::std::string& BlobHeader::indexdata() const {
  // @@protoc_insertion_point(field_get:BlobHeader.indexdata)
  return indexdata_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BlobHeader::set_indexdata(const ::std::string& value) {
  set_has_indexdata();
  indexdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:BlobHeader.indexdata)
}
 void BlobHeader::set_indexdata(const char* value) {
  set_has_indexdata();
  indexdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:BlobHeader.indexdata)
}
 void BlobHeader::set_indexdata(const void* value, size_t size) {
  set_has_indexdata();
  indexdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:BlobHeader.indexdata)
}
 ::std::string* BlobHeader::mutable_indexdata() {
  set_has_indexdata();
  // @@protoc_insertion_point(field_mutable:BlobHeader.indexdata)
  return indexdata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* BlobHeader::release_indexdata() {
  // @@protoc_insertion_point(field_release:BlobHeader.indexdata)
  clear_has_indexdata();
  return indexdata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BlobHeader::set_allocated_indexdata(::std::string* indexdata) {
  if (indexdata != NULL) {
    set_has_indexdata();
  } else {
    clear_has_indexdata();
  }
  indexdata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), indexdata);
  // @@protoc_insertion_point(field_set_allocated:BlobHeader.indexdata)
}

// required int32 datasize = 3;
bool BlobHeader::has_datasize() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void BlobHeader::set_has_datasize() {
  _has_bits_[0] |= 0x00000004u;
}
void BlobHeader::clear_has_datasize() {
  _has_bits_[0] &= ~0x00000004u;
}
void BlobHeader::clear_datasize() {
  datasize_ = 0;
  clear_has_datasize();
}
 ::google::protobuf::int32 BlobHeader::datasize() const {
  // @@protoc_insertion_point(field_get:BlobHeader.datasize)
  return datasize_;
}
 void BlobHeader::set_datasize(::google::protobuf::int32 value) {
  set_has_datasize();
  datasize_ = value;
  // @@protoc_insertion_point(field_set:BlobHeader.datasize)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Blob::kRawFieldNumber;
const int Blob::kRawSizeFieldNumber;
const int Blob::kZlibDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Blob::Blob()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Blob)
}

void Blob::InitAsDefaultInstance() {
}

Blob::Blob(const Blob& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Blob)
}

void Blob::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  raw_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  raw_size_ = 0;
  zlib_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Blob::~Blob() {
  // @@protoc_insertion_point(destructor:Blob)
  SharedDtor();
}

void Blob::SharedDtor() {
  raw_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  zlib_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Blob::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Blob::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Blob_descriptor_;
}

const Blob& Blob::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_osmblob_2eproto();
  return *default_instance_;
}

Blob* Blob::default_instance_ = NULL;

Blob* Blob::New(::google::protobuf::Arena* arena) const {
  Blob* n = new Blob;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Blob::Clear() {
// @@protoc_insertion_point(message_clear_start:Blob)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_raw()) {
      raw_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    raw_size_ = 0;
    if (has_zlib_data()) {
      zlib_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Blob::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Blob)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes raw = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_raw()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_raw_size;
        break;
      }

      // optional int32 raw_size = 2;
      case 2: {
        if (tag == 16) {
         parse_raw_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &raw_size_)));
          set_has_raw_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_zlib_data;
        break;
      }

      // optional bytes zlib_data = 3;
      case 3: {
        if (tag == 26) {
         parse_zlib_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_zlib_data()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Blob)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Blob)
  return false;
#undef DO_
}

void Blob::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Blob)
  // optional bytes raw = 1;
  if (has_raw()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->raw(), output);
  }

  // optional int32 raw_size = 2;
  if (has_raw_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->raw_size(), output);
  }

  // optional bytes zlib_data = 3;
  if (has_zlib_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->zlib_data(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Blob)
}

::google::protobuf::uint8* Blob::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Blob)
  // optional bytes raw = 1;
  if (has_raw()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->raw(), target);
  }

  // optional int32 raw_size = 2;
  if (has_raw_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->raw_size(), target);
  }

  // optional bytes zlib_data = 3;
  if (has_zlib_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->zlib_data(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Blob)
  return target;
}

int Blob::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Blob)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional bytes raw = 1;
    if (has_raw()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->raw());
    }

    // optional int32 raw_size = 2;
    if (has_raw_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->raw_size());
    }

    // optional bytes zlib_data = 3;
    if (has_zlib_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->zlib_data());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Blob::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Blob)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Blob* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Blob>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Blob)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Blob)
    MergeFrom(*source);
  }
}

void Blob::MergeFrom(const Blob& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Blob)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_raw()) {
      set_has_raw();
      raw_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.raw_);
    }
    if (from.has_raw_size()) {
      set_raw_size(from.raw_size());
    }
    if (from.has_zlib_data()) {
      set_has_zlib_data();
      zlib_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.zlib_data_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Blob::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Blob)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Blob::CopyFrom(const Blob& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Blob)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Blob::IsInitialized() const {

  return true;
}

void Blob::Swap(Blob* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Blob::InternalSwap(Blob* other) {
  raw_.Swap(&other->raw_);
  std::swap(raw_size_, other->raw_size_);
  zlib_data_.Swap(&other->zlib_data_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Blob::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Blob_descriptor_;
  metadata.reflection = Blob_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Blob

// optional bytes raw = 1;
bool Blob::has_raw() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Blob::set_has_raw() {
  _has_bits_[0] |= 0x00000001u;
}
void Blob::clear_has_raw() {
  _has_bits_[0] &= ~0x00000001u;
}
void Blob::clear_raw() {
  raw_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_raw();
}
 const ::std::string& Blob::raw() const {
  // @@protoc_insertion_point(field_get:Blob.raw)
  return raw_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Blob::set_raw(const ::std::string& value) {
  set_has_raw();
  raw_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Blob.raw)
}
 void Blob::set_raw(const char* value) {
  set_has_raw();
  raw_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Blob.raw)
}
 void Blob::set_raw(const void* value, size_t size) {
  set_has_raw();
  raw_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Blob.raw)
}
 ::std::string* Blob::mutable_raw() {
  set_has_raw();
  // @@protoc_insertion_point(field_mutable:Blob.raw)
  return raw_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Blob::release_raw() {
  // @@protoc_insertion_point(field_release:Blob.raw)
  clear_has_raw();
  return raw_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Blob::set_allocated_raw(::std::string* raw) {
  if (raw != NULL) {
    set_has_raw();
  } else {
    clear_has_raw();
  }
  raw_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), raw);
  // @@protoc_insertion_point(field_set_allocated:Blob.raw)
}

// optional int32 raw_size = 2;
bool Blob::has_raw_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Blob::set_has_raw_size() {
  _has_bits_[0] |= 0x00000002u;
}
void Blob::clear_has_raw_size() {
  _has_bits_[0] &= ~0x00000002u;
}
void Blob::clear_raw_size() {
  raw_size_ = 0;
  clear_has_raw_size();
}
 ::google::protobuf::int32 Blob::raw_size() const {
  // @@protoc_insertion_point(field_get:Blob.raw_size)
  return raw_size_;
}
 void Blob::set_raw_size(::google::protobuf::int32 value) {
  set_has_raw_size();
  raw_size_ = value;
  // @@protoc_insertion_point(field_set:Blob.raw_size)
}

// optional bytes zlib_data = 3;
bool Blob::has_zlib_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Blob::set_has_zlib_data() {
  _has_bits_[0] |= 0x00000004u;
}
void Blob::clear_has_zlib_data() {
  _has_bits_[0] &= ~0x00000004u;
}
void Blob::clear_zlib_data() {
  zlib_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_zlib_data();
}
 const ::std::string& Blob::zlib_data() const {
  // @@protoc_insertion_point(field_get:Blob.zlib_data)
  return zlib_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Blob::set_zlib_data(const ::std::string& value) {
  set_has_zlib_data();
  zlib_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Blob.zlib_data)
}
 void Blob::set_zlib_data(const char* value) {
  set_has_zlib_data();
  zlib_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Blob.zlib_data)
}
 void Blob::set_zlib_data(const void* value, size_t size) {
  set_has_zlib_data();
  zlib_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Blob.zlib_data)
}
 ::std::string* Blob::mutable_zlib_data() {
  set_has_zlib_data();
  // @@protoc_insertion_point(field_mutable:Blob.zlib_data)
  return zlib_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Blob::release_zlib_data() {
  // @@protoc_insertion_point(field_release:Blob.zlib_data)
  clear_has_zlib_data();
  return zlib_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Blob::set_allocated_zlib_data(::std::string* zlib_data) {
  if (zlib_data != NULL) {
    set_has_zlib_data();
  } else {
    clear_has_zlib_data();
  }
  zlib_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), zlib_data);
  // @@protoc_insertion_point(field_set_allocated:Blob.zlib_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
