// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: search_msg.proto

#ifndef PROTOBUF_search_5fmsg_2eproto__INCLUDED
#define PROTOBUF_search_5fmsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_search_5fmsg_2eproto();
void protobuf_AssignDesc_search_5fmsg_2eproto();
void protobuf_ShutdownFile_search_5fmsg_2eproto();

class search_msg;
class search_result;

// ===================================================================

class search_msg : public ::google::protobuf::Message {
 public:
  search_msg();
  virtual ~search_msg();

  search_msg(const search_msg& from);

  inline search_msg& operator=(const search_msg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const search_msg& default_instance();

  void Swap(search_msg* other);

  // implements Message ----------------------------------------------

  inline search_msg* New() const { return New(NULL); }

  search_msg* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const search_msg& from);
  void MergeFrom(const search_msg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(search_msg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated bytes word = 1;
  int word_size() const;
  void clear_word();
  static const int kWordFieldNumber = 1;
  const ::std::string& word(int index) const;
  ::std::string* mutable_word(int index);
  void set_word(int index, const ::std::string& value);
  void set_word(int index, const char* value);
  void set_word(int index, const void* value, size_t size);
  ::std::string* add_word();
  void add_word(const ::std::string& value);
  void add_word(const char* value);
  void add_word(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& word() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_word();

  // @@protoc_insertion_point(class_scope:search_msg)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> word_;
  friend void  protobuf_AddDesc_search_5fmsg_2eproto();
  friend void protobuf_AssignDesc_search_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_search_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static search_msg* default_instance_;
};
// -------------------------------------------------------------------

class search_result : public ::google::protobuf::Message {
 public:
  search_result();
  virtual ~search_result();

  search_result(const search_result& from);

  inline search_result& operator=(const search_result& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const search_result& default_instance();

  void Swap(search_result* other);

  // implements Message ----------------------------------------------

  inline search_result* New() const { return New(NULL); }

  search_result* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const search_result& from);
  void MergeFrom(const search_result& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(search_result* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 id = 1;
  int id_size() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id(int index) const;
  void set_id(int index, ::google::protobuf::int32 value);
  void add_id(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      id() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_id();

  // @@protoc_insertion_point(class_scope:search_result)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > id_;
  friend void  protobuf_AddDesc_search_5fmsg_2eproto();
  friend void protobuf_AssignDesc_search_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_search_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static search_result* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// search_msg

// repeated bytes word = 1;
inline int search_msg::word_size() const {
  return word_.size();
}
inline void search_msg::clear_word() {
  word_.Clear();
}
inline const ::std::string& search_msg::word(int index) const {
  // @@protoc_insertion_point(field_get:search_msg.word)
  return word_.Get(index);
}
inline ::std::string* search_msg::mutable_word(int index) {
  // @@protoc_insertion_point(field_mutable:search_msg.word)
  return word_.Mutable(index);
}
inline void search_msg::set_word(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:search_msg.word)
  word_.Mutable(index)->assign(value);
}
inline void search_msg::set_word(int index, const char* value) {
  word_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:search_msg.word)
}
inline void search_msg::set_word(int index, const void* value, size_t size) {
  word_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:search_msg.word)
}
inline ::std::string* search_msg::add_word() {
  return word_.Add();
}
inline void search_msg::add_word(const ::std::string& value) {
  word_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:search_msg.word)
}
inline void search_msg::add_word(const char* value) {
  word_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:search_msg.word)
}
inline void search_msg::add_word(const void* value, size_t size) {
  word_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:search_msg.word)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
search_msg::word() const {
  // @@protoc_insertion_point(field_list:search_msg.word)
  return word_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
search_msg::mutable_word() {
  // @@protoc_insertion_point(field_mutable_list:search_msg.word)
  return &word_;
}

// -------------------------------------------------------------------

// search_result

// repeated int32 id = 1;
inline int search_result::id_size() const {
  return id_.size();
}
inline void search_result::clear_id() {
  id_.Clear();
}
inline ::google::protobuf::int32 search_result::id(int index) const {
  // @@protoc_insertion_point(field_get:search_result.id)
  return id_.Get(index);
}
inline void search_result::set_id(int index, ::google::protobuf::int32 value) {
  id_.Set(index, value);
  // @@protoc_insertion_point(field_set:search_result.id)
}
inline void search_result::add_id(::google::protobuf::int32 value) {
  id_.Add(value);
  // @@protoc_insertion_point(field_add:search_result.id)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
search_result::id() const {
  // @@protoc_insertion_point(field_list:search_result.id)
  return id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
search_result::mutable_id() {
  // @@protoc_insertion_point(field_mutable_list:search_result.id)
  return &id_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_search_5fmsg_2eproto__INCLUDED
