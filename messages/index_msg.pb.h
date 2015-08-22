// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: index_msg.proto

#ifndef PROTOBUF_index_5fmsg_2eproto__INCLUDED
#define PROTOBUF_index_5fmsg_2eproto__INCLUDED

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
void protobuf_AddDesc_index_5fmsg_2eproto();
void protobuf_AssignDesc_index_5fmsg_2eproto();
void protobuf_ShutdownFile_index_5fmsg_2eproto();

class SingleItem;
class index_msg;

// ===================================================================

class SingleItem : public ::google::protobuf::Message {
 public:
  SingleItem();
  virtual ~SingleItem();

  SingleItem(const SingleItem& from);

  inline SingleItem& operator=(const SingleItem& from) {
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
  static const SingleItem& default_instance();

  void Swap(SingleItem* other);

  // implements Message ----------------------------------------------

  inline SingleItem* New() const { return New(NULL); }

  SingleItem* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SingleItem& from);
  void MergeFrom(const SingleItem& from);
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
  void InternalSwap(SingleItem* other);
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

  // required bytes item = 1;
  bool has_item() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::std::string& item() const;
  void set_item(const ::std::string& value);
  void set_item(const char* value);
  void set_item(const void* value, size_t size);
  ::std::string* mutable_item();
  ::std::string* release_item();
  void set_allocated_item(::std::string* item);

  // optional uint32 num = 2;
  bool has_num() const;
  void clear_num();
  static const int kNumFieldNumber = 2;
  ::google::protobuf::uint32 num() const;
  void set_num(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SingleItem)
 private:
  inline void set_has_item();
  inline void clear_has_item();
  inline void set_has_num();
  inline void clear_has_num();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr item_;
  ::google::protobuf::uint32 num_;
  friend void  protobuf_AddDesc_index_5fmsg_2eproto();
  friend void protobuf_AssignDesc_index_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_index_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static SingleItem* default_instance_;
};
// -------------------------------------------------------------------

class index_msg : public ::google::protobuf::Message {
 public:
  index_msg();
  virtual ~index_msg();

  index_msg(const index_msg& from);

  inline index_msg& operator=(const index_msg& from) {
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
  static const index_msg& default_instance();

  void Swap(index_msg* other);

  // implements Message ----------------------------------------------

  inline index_msg* New() const { return New(NULL); }

  index_msg* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const index_msg& from);
  void MergeFrom(const index_msg& from);
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
  void InternalSwap(index_msg* other);
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

  // required uint64 max_id = 1;
  bool has_max_id() const;
  void clear_max_id();
  static const int kMaxIdFieldNumber = 1;
  ::google::protobuf::uint64 max_id() const;
  void set_max_id(::google::protobuf::uint64 value);

  // repeated .SingleItem single_item = 2;
  int single_item_size() const;
  void clear_single_item();
  static const int kSingleItemFieldNumber = 2;
  const ::SingleItem& single_item(int index) const;
  ::SingleItem* mutable_single_item(int index);
  ::SingleItem* add_single_item();
  const ::google::protobuf::RepeatedPtrField< ::SingleItem >&
      single_item() const;
  ::google::protobuf::RepeatedPtrField< ::SingleItem >*
      mutable_single_item();

  // @@protoc_insertion_point(class_scope:index_msg)
 private:
  inline void set_has_max_id();
  inline void clear_has_max_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 max_id_;
  ::google::protobuf::RepeatedPtrField< ::SingleItem > single_item_;
  friend void  protobuf_AddDesc_index_5fmsg_2eproto();
  friend void protobuf_AssignDesc_index_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_index_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static index_msg* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SingleItem

// required bytes item = 1;
inline bool SingleItem::has_item() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SingleItem::set_has_item() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SingleItem::clear_has_item() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SingleItem::clear_item() {
  item_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item();
}
inline const ::std::string& SingleItem::item() const {
  // @@protoc_insertion_point(field_get:SingleItem.item)
  return item_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SingleItem::set_item(const ::std::string& value) {
  set_has_item();
  item_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SingleItem.item)
}
inline void SingleItem::set_item(const char* value) {
  set_has_item();
  item_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SingleItem.item)
}
inline void SingleItem::set_item(const void* value, size_t size) {
  set_has_item();
  item_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SingleItem.item)
}
inline ::std::string* SingleItem::mutable_item() {
  set_has_item();
  // @@protoc_insertion_point(field_mutable:SingleItem.item)
  return item_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SingleItem::release_item() {
  clear_has_item();
  return item_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SingleItem::set_allocated_item(::std::string* item) {
  if (item != NULL) {
    set_has_item();
  } else {
    clear_has_item();
  }
  item_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item);
  // @@protoc_insertion_point(field_set_allocated:SingleItem.item)
}

// optional uint32 num = 2;
inline bool SingleItem::has_num() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SingleItem::set_has_num() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SingleItem::clear_has_num() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SingleItem::clear_num() {
  num_ = 0u;
  clear_has_num();
}
inline ::google::protobuf::uint32 SingleItem::num() const {
  // @@protoc_insertion_point(field_get:SingleItem.num)
  return num_;
}
inline void SingleItem::set_num(::google::protobuf::uint32 value) {
  set_has_num();
  num_ = value;
  // @@protoc_insertion_point(field_set:SingleItem.num)
}

// -------------------------------------------------------------------

// index_msg

// required uint64 max_id = 1;
inline bool index_msg::has_max_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void index_msg::set_has_max_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void index_msg::clear_has_max_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void index_msg::clear_max_id() {
  max_id_ = GOOGLE_ULONGLONG(0);
  clear_has_max_id();
}
inline ::google::protobuf::uint64 index_msg::max_id() const {
  // @@protoc_insertion_point(field_get:index_msg.max_id)
  return max_id_;
}
inline void index_msg::set_max_id(::google::protobuf::uint64 value) {
  set_has_max_id();
  max_id_ = value;
  // @@protoc_insertion_point(field_set:index_msg.max_id)
}

// repeated .SingleItem single_item = 2;
inline int index_msg::single_item_size() const {
  return single_item_.size();
}
inline void index_msg::clear_single_item() {
  single_item_.Clear();
}
inline const ::SingleItem& index_msg::single_item(int index) const {
  // @@protoc_insertion_point(field_get:index_msg.single_item)
  return single_item_.Get(index);
}
inline ::SingleItem* index_msg::mutable_single_item(int index) {
  // @@protoc_insertion_point(field_mutable:index_msg.single_item)
  return single_item_.Mutable(index);
}
inline ::SingleItem* index_msg::add_single_item() {
  // @@protoc_insertion_point(field_add:index_msg.single_item)
  return single_item_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SingleItem >&
index_msg::single_item() const {
  // @@protoc_insertion_point(field_list:index_msg.single_item)
  return single_item_;
}
inline ::google::protobuf::RepeatedPtrField< ::SingleItem >*
index_msg::mutable_single_item() {
  // @@protoc_insertion_point(field_mutable_list:index_msg.single_item)
  return &single_item_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_index_5fmsg_2eproto__INCLUDED