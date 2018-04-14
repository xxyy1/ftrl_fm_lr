// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#include "config.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace lambda_sparse {
class ConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Config>
      _instance;
} _Config_default_instance_;
}  // namespace lambda_sparse
namespace protobuf_config_2eproto {
void InitDefaultsConfigImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::lambda_sparse::_Config_default_instance_;
    new (ptr) ::lambda_sparse::Config();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::lambda_sparse::Config::InitAsDefaultInstance();
}

void InitDefaultsConfig() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsConfigImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lambda_sparse::Config, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lambda_sparse::Config, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lambda_sparse::Config, learning_rate_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lambda_sparse::Config, alpha_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lambda_sparse::Config, beta_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lambda_sparse::Config, l1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lambda_sparse::Config, l2_),
  0,
  1,
  2,
  3,
  4,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::lambda_sparse::Config)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::lambda_sparse::_Config_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014config.proto\022\rlambda_sparse\"T\n\006Config\022"
      "\025\n\rlearning_rate\030\001 \001(\001\022\r\n\005alpha\030\002 \001(\001\022\014\n"
      "\004beta\030\003 \001(\001\022\n\n\002l1\030\004 \001(\001\022\n\n\002l2\030\005 \001(\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 115);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "config.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_config_2eproto
namespace lambda_sparse {

// ===================================================================

void Config::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Config::kLearningRateFieldNumber;
const int Config::kAlphaFieldNumber;
const int Config::kBetaFieldNumber;
const int Config::kL1FieldNumber;
const int Config::kL2FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Config::Config()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_config_2eproto::InitDefaultsConfig();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:lambda_sparse.Config)
}
Config::Config(const Config& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&learning_rate_, &from.learning_rate_,
    static_cast<size_t>(reinterpret_cast<char*>(&l2_) -
    reinterpret_cast<char*>(&learning_rate_)) + sizeof(l2_));
  // @@protoc_insertion_point(copy_constructor:lambda_sparse.Config)
}

void Config::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&learning_rate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&l2_) -
      reinterpret_cast<char*>(&learning_rate_)) + sizeof(l2_));
}

Config::~Config() {
  // @@protoc_insertion_point(destructor:lambda_sparse.Config)
  SharedDtor();
}

void Config::SharedDtor() {
}

void Config::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Config::descriptor() {
  ::protobuf_config_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_config_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Config& Config::default_instance() {
  ::protobuf_config_2eproto::InitDefaultsConfig();
  return *internal_default_instance();
}

Config* Config::New(::google::protobuf::Arena* arena) const {
  Config* n = new Config;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Config::Clear() {
// @@protoc_insertion_point(message_clear_start:lambda_sparse.Config)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 31u) {
    ::memset(&learning_rate_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&l2_) -
        reinterpret_cast<char*>(&learning_rate_)) + sizeof(l2_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Config::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:lambda_sparse.Config)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double learning_rate = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_learning_rate();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &learning_rate_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double alpha = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {
          set_has_alpha();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &alpha_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double beta = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {
          set_has_beta();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &beta_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double l1 = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {
          set_has_l1();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &l1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double l2 = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {
          set_has_l2();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &l2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:lambda_sparse.Config)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:lambda_sparse.Config)
  return false;
#undef DO_
}

void Config::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:lambda_sparse.Config)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double learning_rate = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->learning_rate(), output);
  }

  // optional double alpha = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->alpha(), output);
  }

  // optional double beta = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->beta(), output);
  }

  // optional double l1 = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->l1(), output);
  }

  // optional double l2 = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->l2(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:lambda_sparse.Config)
}

::google::protobuf::uint8* Config::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:lambda_sparse.Config)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double learning_rate = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->learning_rate(), target);
  }

  // optional double alpha = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->alpha(), target);
  }

  // optional double beta = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->beta(), target);
  }

  // optional double l1 = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->l1(), target);
  }

  // optional double l2 = 5;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->l2(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:lambda_sparse.Config)
  return target;
}

size_t Config::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:lambda_sparse.Config)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 31u) {
    // optional double learning_rate = 1;
    if (has_learning_rate()) {
      total_size += 1 + 8;
    }

    // optional double alpha = 2;
    if (has_alpha()) {
      total_size += 1 + 8;
    }

    // optional double beta = 3;
    if (has_beta()) {
      total_size += 1 + 8;
    }

    // optional double l1 = 4;
    if (has_l1()) {
      total_size += 1 + 8;
    }

    // optional double l2 = 5;
    if (has_l2()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Config::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:lambda_sparse.Config)
  GOOGLE_DCHECK_NE(&from, this);
  const Config* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Config>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:lambda_sparse.Config)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:lambda_sparse.Config)
    MergeFrom(*source);
  }
}

void Config::MergeFrom(const Config& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:lambda_sparse.Config)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      learning_rate_ = from.learning_rate_;
    }
    if (cached_has_bits & 0x00000002u) {
      alpha_ = from.alpha_;
    }
    if (cached_has_bits & 0x00000004u) {
      beta_ = from.beta_;
    }
    if (cached_has_bits & 0x00000008u) {
      l1_ = from.l1_;
    }
    if (cached_has_bits & 0x00000010u) {
      l2_ = from.l2_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Config::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:lambda_sparse.Config)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Config::CopyFrom(const Config& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:lambda_sparse.Config)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Config::IsInitialized() const {
  return true;
}

void Config::Swap(Config* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Config::InternalSwap(Config* other) {
  using std::swap;
  swap(learning_rate_, other->learning_rate_);
  swap(alpha_, other->alpha_);
  swap(beta_, other->beta_);
  swap(l1_, other->l1_);
  swap(l2_, other->l2_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Config::GetMetadata() const {
  protobuf_config_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_config_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lambda_sparse

// @@protoc_insertion_point(global_scope)