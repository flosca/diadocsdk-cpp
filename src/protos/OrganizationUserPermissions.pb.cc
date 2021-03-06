// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrganizationUserPermissions.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "OrganizationUserPermissions.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

namespace {

const ::google::protobuf::Descriptor* OrganizationUserPermissions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OrganizationUserPermissions_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* DocumentAccessLevel_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_OrganizationUserPermissions_2eproto() {
  protobuf_AddDesc_OrganizationUserPermissions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "OrganizationUserPermissions.proto");
  GOOGLE_CHECK(file != NULL);
  OrganizationUserPermissions_descriptor_ = file->message_type(0);
  static const int OrganizationUserPermissions_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, userdepartmentid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, isadministrator_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, documentaccesslevel_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, cansigndocuments_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, canaddresolutions_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, canrequestresolutions_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, selecteddepartmentids_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, jobtitle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, cancreatedocuments_),
  };
  OrganizationUserPermissions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OrganizationUserPermissions_descriptor_,
      OrganizationUserPermissions::default_instance_,
      OrganizationUserPermissions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrganizationUserPermissions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OrganizationUserPermissions));
  DocumentAccessLevel_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_OrganizationUserPermissions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OrganizationUserPermissions_descriptor_, &OrganizationUserPermissions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_OrganizationUserPermissions_2eproto() {
  delete OrganizationUserPermissions::default_instance_;
  delete OrganizationUserPermissions_reflection_;
}

void protobuf_AddDesc_OrganizationUserPermissions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!OrganizationUserPermissions.proto\022\020Dia"
    "doc.Api.Proto\"\321\002\n\033OrganizationUserPermis"
    "sions\022\030\n\020UserDepartmentId\030\001 \002(\t\022\027\n\017IsAdm"
    "inistrator\030\002 \002(\010\022^\n\023DocumentAccessLevel\030"
    "\003 \001(\0162%.Diadoc.Api.Proto.DocumentAccessL"
    "evel:\032UnknownDocumentAccessLevel\022\030\n\020CanS"
    "ignDocuments\030\004 \002(\010\022\031\n\021CanAddResolutions\030"
    "\007 \002(\010\022\035\n\025CanRequestResolutions\030\010 \002(\010\022\035\n\025"
    "SelectedDepartmentIds\030\t \003(\t\022\020\n\010JobTitle\030"
    "\n \001(\t\022\032\n\022CanCreateDocuments\030\013 \002(\010*\236\001\n\023Do"
    "cumentAccessLevel\022\'\n\032UnknownDocumentAcce"
    "ssLevel\020\377\377\377\377\377\377\377\377\377\001\022\022\n\016DepartmentOnly\020\000\022\037"
    "\n\033DepartmentAndSubdepartments\020\001\022\020\n\014AllDo"
    "cuments\020\002\022\027\n\023SelectedDepartments\020\003", 554);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "OrganizationUserPermissions.proto", &protobuf_RegisterTypes);
  OrganizationUserPermissions::default_instance_ = new OrganizationUserPermissions();
  OrganizationUserPermissions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_OrganizationUserPermissions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_OrganizationUserPermissions_2eproto {
  StaticDescriptorInitializer_OrganizationUserPermissions_2eproto() {
    protobuf_AddDesc_OrganizationUserPermissions_2eproto();
  }
} static_descriptor_initializer_OrganizationUserPermissions_2eproto_;
const ::google::protobuf::EnumDescriptor* DocumentAccessLevel_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DocumentAccessLevel_descriptor_;
}
bool DocumentAccessLevel_IsValid(int value) {
  switch(value) {
    case -1:
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int OrganizationUserPermissions::kUserDepartmentIdFieldNumber;
const int OrganizationUserPermissions::kIsAdministratorFieldNumber;
const int OrganizationUserPermissions::kDocumentAccessLevelFieldNumber;
const int OrganizationUserPermissions::kCanSignDocumentsFieldNumber;
const int OrganizationUserPermissions::kCanAddResolutionsFieldNumber;
const int OrganizationUserPermissions::kCanRequestResolutionsFieldNumber;
const int OrganizationUserPermissions::kSelectedDepartmentIdsFieldNumber;
const int OrganizationUserPermissions::kJobTitleFieldNumber;
const int OrganizationUserPermissions::kCanCreateDocumentsFieldNumber;
#endif  // !_MSC_VER

OrganizationUserPermissions::OrganizationUserPermissions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.OrganizationUserPermissions)
}

void OrganizationUserPermissions::InitAsDefaultInstance() {
}

OrganizationUserPermissions::OrganizationUserPermissions(const OrganizationUserPermissions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.OrganizationUserPermissions)
}

void OrganizationUserPermissions::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  userdepartmentid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  isadministrator_ = false;
  documentaccesslevel_ = -1;
  cansigndocuments_ = false;
  canaddresolutions_ = false;
  canrequestresolutions_ = false;
  jobtitle_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cancreatedocuments_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OrganizationUserPermissions::~OrganizationUserPermissions() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.OrganizationUserPermissions)
  SharedDtor();
}

void OrganizationUserPermissions::SharedDtor() {
  if (userdepartmentid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete userdepartmentid_;
  }
  if (jobtitle_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete jobtitle_;
  }
  if (this != default_instance_) {
  }
}

void OrganizationUserPermissions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OrganizationUserPermissions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OrganizationUserPermissions_descriptor_;
}

const OrganizationUserPermissions& OrganizationUserPermissions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_OrganizationUserPermissions_2eproto();
  return *default_instance_;
}

OrganizationUserPermissions* OrganizationUserPermissions::default_instance_ = NULL;

OrganizationUserPermissions* OrganizationUserPermissions::New() const {
  return new OrganizationUserPermissions;
}

void OrganizationUserPermissions::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<OrganizationUserPermissions*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 191) {
    ZR_(isadministrator_, canrequestresolutions_);
    if (has_userdepartmentid()) {
      if (userdepartmentid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        userdepartmentid_->clear();
      }
    }
    documentaccesslevel_ = -1;
    if (has_jobtitle()) {
      if (jobtitle_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        jobtitle_->clear();
      }
    }
  }
  cancreatedocuments_ = false;

#undef OFFSET_OF_FIELD_
#undef ZR_

  selecteddepartmentids_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OrganizationUserPermissions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.OrganizationUserPermissions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string UserDepartmentId = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_userdepartmentid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->userdepartmentid().data(), this->userdepartmentid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "userdepartmentid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_IsAdministrator;
        break;
      }

      // required bool IsAdministrator = 2;
      case 2: {
        if (tag == 16) {
         parse_IsAdministrator:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isadministrator_)));
          set_has_isadministrator();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_DocumentAccessLevel;
        break;
      }

      // optional .Diadoc.Api.Proto.DocumentAccessLevel DocumentAccessLevel = 3 [default = UnknownDocumentAccessLevel];
      case 3: {
        if (tag == 24) {
         parse_DocumentAccessLevel:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Diadoc::Api::Proto::DocumentAccessLevel_IsValid(value)) {
            set_documentaccesslevel(static_cast< ::Diadoc::Api::Proto::DocumentAccessLevel >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_CanSignDocuments;
        break;
      }

      // required bool CanSignDocuments = 4;
      case 4: {
        if (tag == 32) {
         parse_CanSignDocuments:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &cansigndocuments_)));
          set_has_cansigndocuments();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_CanAddResolutions;
        break;
      }

      // required bool CanAddResolutions = 7;
      case 7: {
        if (tag == 56) {
         parse_CanAddResolutions:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &canaddresolutions_)));
          set_has_canaddresolutions();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_CanRequestResolutions;
        break;
      }

      // required bool CanRequestResolutions = 8;
      case 8: {
        if (tag == 64) {
         parse_CanRequestResolutions:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &canrequestresolutions_)));
          set_has_canrequestresolutions();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_SelectedDepartmentIds;
        break;
      }

      // repeated string SelectedDepartmentIds = 9;
      case 9: {
        if (tag == 74) {
         parse_SelectedDepartmentIds:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_selecteddepartmentids()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->selecteddepartmentids(this->selecteddepartmentids_size() - 1).data(),
            this->selecteddepartmentids(this->selecteddepartmentids_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "selecteddepartmentids");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_SelectedDepartmentIds;
        if (input->ExpectTag(82)) goto parse_JobTitle;
        break;
      }

      // optional string JobTitle = 10;
      case 10: {
        if (tag == 82) {
         parse_JobTitle:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_jobtitle()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->jobtitle().data(), this->jobtitle().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "jobtitle");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(88)) goto parse_CanCreateDocuments;
        break;
      }

      // required bool CanCreateDocuments = 11;
      case 11: {
        if (tag == 88) {
         parse_CanCreateDocuments:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &cancreatedocuments_)));
          set_has_cancreatedocuments();
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.OrganizationUserPermissions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.OrganizationUserPermissions)
  return false;
#undef DO_
}

void OrganizationUserPermissions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.OrganizationUserPermissions)
  // required string UserDepartmentId = 1;
  if (has_userdepartmentid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->userdepartmentid().data(), this->userdepartmentid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "userdepartmentid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->userdepartmentid(), output);
  }

  // required bool IsAdministrator = 2;
  if (has_isadministrator()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->isadministrator(), output);
  }

  // optional .Diadoc.Api.Proto.DocumentAccessLevel DocumentAccessLevel = 3 [default = UnknownDocumentAccessLevel];
  if (has_documentaccesslevel()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->documentaccesslevel(), output);
  }

  // required bool CanSignDocuments = 4;
  if (has_cansigndocuments()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->cansigndocuments(), output);
  }

  // required bool CanAddResolutions = 7;
  if (has_canaddresolutions()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->canaddresolutions(), output);
  }

  // required bool CanRequestResolutions = 8;
  if (has_canrequestresolutions()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->canrequestresolutions(), output);
  }

  // repeated string SelectedDepartmentIds = 9;
  for (int i = 0; i < this->selecteddepartmentids_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->selecteddepartmentids(i).data(), this->selecteddepartmentids(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "selecteddepartmentids");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      9, this->selecteddepartmentids(i), output);
  }

  // optional string JobTitle = 10;
  if (has_jobtitle()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->jobtitle().data(), this->jobtitle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "jobtitle");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->jobtitle(), output);
  }

  // required bool CanCreateDocuments = 11;
  if (has_cancreatedocuments()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->cancreatedocuments(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.OrganizationUserPermissions)
}

::google::protobuf::uint8* OrganizationUserPermissions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.OrganizationUserPermissions)
  // required string UserDepartmentId = 1;
  if (has_userdepartmentid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->userdepartmentid().data(), this->userdepartmentid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "userdepartmentid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->userdepartmentid(), target);
  }

  // required bool IsAdministrator = 2;
  if (has_isadministrator()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->isadministrator(), target);
  }

  // optional .Diadoc.Api.Proto.DocumentAccessLevel DocumentAccessLevel = 3 [default = UnknownDocumentAccessLevel];
  if (has_documentaccesslevel()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->documentaccesslevel(), target);
  }

  // required bool CanSignDocuments = 4;
  if (has_cansigndocuments()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->cansigndocuments(), target);
  }

  // required bool CanAddResolutions = 7;
  if (has_canaddresolutions()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->canaddresolutions(), target);
  }

  // required bool CanRequestResolutions = 8;
  if (has_canrequestresolutions()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->canrequestresolutions(), target);
  }

  // repeated string SelectedDepartmentIds = 9;
  for (int i = 0; i < this->selecteddepartmentids_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->selecteddepartmentids(i).data(), this->selecteddepartmentids(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "selecteddepartmentids");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(9, this->selecteddepartmentids(i), target);
  }

  // optional string JobTitle = 10;
  if (has_jobtitle()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->jobtitle().data(), this->jobtitle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "jobtitle");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->jobtitle(), target);
  }

  // required bool CanCreateDocuments = 11;
  if (has_cancreatedocuments()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->cancreatedocuments(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.OrganizationUserPermissions)
  return target;
}

int OrganizationUserPermissions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string UserDepartmentId = 1;
    if (has_userdepartmentid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->userdepartmentid());
    }

    // required bool IsAdministrator = 2;
    if (has_isadministrator()) {
      total_size += 1 + 1;
    }

    // optional .Diadoc.Api.Proto.DocumentAccessLevel DocumentAccessLevel = 3 [default = UnknownDocumentAccessLevel];
    if (has_documentaccesslevel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->documentaccesslevel());
    }

    // required bool CanSignDocuments = 4;
    if (has_cansigndocuments()) {
      total_size += 1 + 1;
    }

    // required bool CanAddResolutions = 7;
    if (has_canaddresolutions()) {
      total_size += 1 + 1;
    }

    // required bool CanRequestResolutions = 8;
    if (has_canrequestresolutions()) {
      total_size += 1 + 1;
    }

    // optional string JobTitle = 10;
    if (has_jobtitle()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->jobtitle());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required bool CanCreateDocuments = 11;
    if (has_cancreatedocuments()) {
      total_size += 1 + 1;
    }

  }
  // repeated string SelectedDepartmentIds = 9;
  total_size += 1 * this->selecteddepartmentids_size();
  for (int i = 0; i < this->selecteddepartmentids_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->selecteddepartmentids(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OrganizationUserPermissions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OrganizationUserPermissions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OrganizationUserPermissions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OrganizationUserPermissions::MergeFrom(const OrganizationUserPermissions& from) {
  GOOGLE_CHECK_NE(&from, this);
  selecteddepartmentids_.MergeFrom(from.selecteddepartmentids_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_userdepartmentid()) {
      set_userdepartmentid(from.userdepartmentid());
    }
    if (from.has_isadministrator()) {
      set_isadministrator(from.isadministrator());
    }
    if (from.has_documentaccesslevel()) {
      set_documentaccesslevel(from.documentaccesslevel());
    }
    if (from.has_cansigndocuments()) {
      set_cansigndocuments(from.cansigndocuments());
    }
    if (from.has_canaddresolutions()) {
      set_canaddresolutions(from.canaddresolutions());
    }
    if (from.has_canrequestresolutions()) {
      set_canrequestresolutions(from.canrequestresolutions());
    }
    if (from.has_jobtitle()) {
      set_jobtitle(from.jobtitle());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_cancreatedocuments()) {
      set_cancreatedocuments(from.cancreatedocuments());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OrganizationUserPermissions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OrganizationUserPermissions::CopyFrom(const OrganizationUserPermissions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OrganizationUserPermissions::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000013b) != 0x0000013b) return false;

  return true;
}

void OrganizationUserPermissions::Swap(OrganizationUserPermissions* other) {
  if (other != this) {
    std::swap(userdepartmentid_, other->userdepartmentid_);
    std::swap(isadministrator_, other->isadministrator_);
    std::swap(documentaccesslevel_, other->documentaccesslevel_);
    std::swap(cansigndocuments_, other->cansigndocuments_);
    std::swap(canaddresolutions_, other->canaddresolutions_);
    std::swap(canrequestresolutions_, other->canrequestresolutions_);
    selecteddepartmentids_.Swap(&other->selecteddepartmentids_);
    std::swap(jobtitle_, other->jobtitle_);
    std::swap(cancreatedocuments_, other->cancreatedocuments_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OrganizationUserPermissions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OrganizationUserPermissions_descriptor_;
  metadata.reflection = OrganizationUserPermissions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
