// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model.proto

#include "model.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace lambda_sparse {
class FeatWgtDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FeatWgt>
      _instance;
} _FeatWgt_default_instance_;
class ModelParametersDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ModelParameters>
      _instance;
} _ModelParameters_default_instance_;
}  // namespace lambda_sparse
namespace protobuf_model_2eproto {
void InitDefaultsFeatWgtImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::lambda_sparse::_FeatWgt_default_instance_;
    new (ptr) ::lambda_sparse::FeatWgt();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::lambda_sparse::FeatWgt::InitAsDefaultInstance();
}

void InitDefaultsFeatWgt() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsFeatWgtImpl);
}

void InitDefaultsModelParametersImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_model_2eproto::InitDefaultsFeatWgt();
  {
    void* ptr = &::lambda_sparse::_ModelParameters_default_instance_;
    new (ptr) ::lambda_sparse::ModelParameters();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::lambda_sparse::ModelParameters::InitAsDefaultInstance();
}

void InitDefaultsModelParameters() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsModelParametersImpl);
}

}  // namespace protobuf_model_2eproto
namespace lambda_sparse {

// ===================================================================

void FeatWgt::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FeatWgt::kFeatIdFieldNumber;
const int FeatWgt::kWiFieldNumber;
const int FeatWgt::kNiFieldNumber;
const int FeatWgt::kZiFieldNumber;
const int FeatWgt::kGtFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FeatWgt::FeatWgt()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_model_2eproto::InitDefaultsFeatWgt();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:lambda_sparse.FeatWgt)
}
FeatWgt::FeatWgt(const FeatWgt& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&feat_id_, &from.feat_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&gt_) -
    reinterpret_cast<char*>(&feat_id_)) + sizeof(gt_));
  // @@protoc_insertion_point(copy_constructor:lambda_sparse.FeatWgt)
}

void FeatWgt::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&feat_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&gt_) -
      reinterpret_cast<char*>(&feat_id_)) + sizeof(gt_));
}

FeatWgt::~FeatWgt() {
  // @@protoc_insertion_point(destructor:lambda_sparse.FeatWgt)
  SharedDtor();
}

void FeatWgt::SharedDtor() {
}

void FeatWgt::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const FeatWgt& FeatWgt::default_instance() {
  ::protobuf_model_2eproto::InitDefaultsFeatWgt();
  return *internal_default_instance();
}

FeatWgt* FeatWgt::New(::google::protobuf::Arena* arena) const {
  FeatWgt* n = new FeatWgt;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FeatWgt::Clear() {
// @@protoc_insertion_point(message_clear_start:lambda_sparse.FeatWgt)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 31u) {
    ::memset(&feat_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&gt_) -
        reinterpret_cast<char*>(&feat_id_)) + sizeof(gt_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool FeatWgt::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:lambda_sparse.FeatWgt)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 feat_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_feat_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &feat_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional float wi = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {
          set_has_wi();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &wi_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional float ni = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {
          set_has_ni();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ni_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional float zi = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {
          set_has_zi();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &zi_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional float gt = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u /* 45 & 0xFF */)) {
          set_has_gt();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &gt_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:lambda_sparse.FeatWgt)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:lambda_sparse.FeatWgt)
  return false;
#undef DO_
}

void FeatWgt::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:lambda_sparse.FeatWgt)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 feat_id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->feat_id(), output);
  }

  // optional float wi = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->wi(), output);
  }

  // optional float ni = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->ni(), output);
  }

  // optional float zi = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->zi(), output);
  }

  // optional float gt = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->gt(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:lambda_sparse.FeatWgt)
}

size_t FeatWgt::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:lambda_sparse.FeatWgt)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 31u) {
    // optional uint64 feat_id = 1;
    if (has_feat_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->feat_id());
    }

    // optional float wi = 2;
    if (has_wi()) {
      total_size += 1 + 4;
    }

    // optional float ni = 3;
    if (has_ni()) {
      total_size += 1 + 4;
    }

    // optional float zi = 4;
    if (has_zi()) {
      total_size += 1 + 4;
    }

    // optional float gt = 5;
    if (has_gt()) {
      total_size += 1 + 4;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FeatWgt::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FeatWgt*>(&from));
}

void FeatWgt::MergeFrom(const FeatWgt& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:lambda_sparse.FeatWgt)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      feat_id_ = from.feat_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      wi_ = from.wi_;
    }
    if (cached_has_bits & 0x00000004u) {
      ni_ = from.ni_;
    }
    if (cached_has_bits & 0x00000008u) {
      zi_ = from.zi_;
    }
    if (cached_has_bits & 0x00000010u) {
      gt_ = from.gt_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void FeatWgt::CopyFrom(const FeatWgt& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:lambda_sparse.FeatWgt)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeatWgt::IsInitialized() const {
  return true;
}

void FeatWgt::Swap(FeatWgt* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FeatWgt::InternalSwap(FeatWgt* other) {
  using std::swap;
  swap(feat_id_, other->feat_id_);
  swap(wi_, other->wi_);
  swap(ni_, other->ni_);
  swap(zi_, other->zi_);
  swap(gt_, other->gt_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string FeatWgt::GetTypeName() const {
  return "lambda_sparse.FeatWgt";
}


// ===================================================================

void ModelParameters::InitAsDefaultInstance() {
  ::lambda_sparse::_ModelParameters_default_instance_._instance.get_mutable()->bias_ = const_cast< ::lambda_sparse::FeatWgt*>(
      ::lambda_sparse::FeatWgt::internal_default_instance());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ModelParameters::kBiasFieldNumber;
const int ModelParameters::kWFieldNumber;
const int ModelParameters::kVFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ModelParameters::ModelParameters()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_model_2eproto::InitDefaultsModelParameters();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:lambda_sparse.ModelParameters)
}
ModelParameters::ModelParameters(const ModelParameters& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      w_(from.w_),
      v_(from.v_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_bias()) {
    bias_ = new ::lambda_sparse::FeatWgt(*from.bias_);
  } else {
    bias_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:lambda_sparse.ModelParameters)
}

void ModelParameters::SharedCtor() {
  _cached_size_ = 0;
  bias_ = NULL;
}

ModelParameters::~ModelParameters() {
  // @@protoc_insertion_point(destructor:lambda_sparse.ModelParameters)
  SharedDtor();
}

void ModelParameters::SharedDtor() {
  if (this != internal_default_instance()) delete bias_;
}

void ModelParameters::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ModelParameters& ModelParameters::default_instance() {
  ::protobuf_model_2eproto::InitDefaultsModelParameters();
  return *internal_default_instance();
}

ModelParameters* ModelParameters::New(::google::protobuf::Arena* arena) const {
  ModelParameters* n = new ModelParameters;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ModelParameters::Clear() {
// @@protoc_insertion_point(message_clear_start:lambda_sparse.ModelParameters)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  w_.Clear();
  v_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(bias_ != NULL);
    bias_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ModelParameters::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:lambda_sparse.ModelParameters)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .lambda_sparse.FeatWgt bias = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_bias()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .lambda_sparse.FeatWgt w = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_w()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .lambda_sparse.FeatWgt v = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_v()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:lambda_sparse.ModelParameters)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:lambda_sparse.ModelParameters)
  return false;
#undef DO_
}

void ModelParameters::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:lambda_sparse.ModelParameters)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .lambda_sparse.FeatWgt bias = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, *this->bias_, output);
  }

  // repeated .lambda_sparse.FeatWgt w = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->w_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->w(static_cast<int>(i)), output);
  }

  // repeated .lambda_sparse.FeatWgt v = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->v_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->v(static_cast<int>(i)), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:lambda_sparse.ModelParameters)
}

size_t ModelParameters::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:lambda_sparse.ModelParameters)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .lambda_sparse.FeatWgt w = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->w_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->w(static_cast<int>(i)));
    }
  }

  // repeated .lambda_sparse.FeatWgt v = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->v_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->v(static_cast<int>(i)));
    }
  }

  // optional .lambda_sparse.FeatWgt bias = 1;
  if (has_bias()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->bias_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ModelParameters::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ModelParameters*>(&from));
}

void ModelParameters::MergeFrom(const ModelParameters& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:lambda_sparse.ModelParameters)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  w_.MergeFrom(from.w_);
  v_.MergeFrom(from.v_);
  if (from.has_bias()) {
    mutable_bias()->::lambda_sparse::FeatWgt::MergeFrom(from.bias());
  }
}

void ModelParameters::CopyFrom(const ModelParameters& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:lambda_sparse.ModelParameters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModelParameters::IsInitialized() const {
  return true;
}

void ModelParameters::Swap(ModelParameters* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ModelParameters::InternalSwap(ModelParameters* other) {
  using std::swap;
  w_.InternalSwap(&other->w_);
  v_.InternalSwap(&other->v_);
  swap(bias_, other->bias_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string ModelParameters::GetTypeName() const {
  return "lambda_sparse.ModelParameters";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lambda_sparse

// @@protoc_insertion_point(global_scope)
