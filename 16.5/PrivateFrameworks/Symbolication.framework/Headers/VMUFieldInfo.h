// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUFIELDINFO_H
#define VMUFIELDINFO_H

@class NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "VMUClassInfo.h"

@interface VMUFieldInfo : NSObject {
    VMUClassInfo *_destinationLayout;
    NSMutableArray *_subFieldArray;
    NSArray *_possibleEnumPayloadFieldArray;
}


@property (readonly) unsigned int bitfieldWidth;
@property (retain, nonatomic) VMUClassInfo *destinationLayout;
@property (readonly, nonatomic) unsigned int flags; // ivar: _flags
@property (readonly, nonatomic) BOOL isArrayEntries;
@property (readonly, nonatomic) BOOL isArraySize;
@property (readonly, nonatomic) BOOL isByref;
@property (readonly, nonatomic) BOOL isCapture;
@property (readonly, nonatomic) BOOL isKeyField;
@property (readonly, nonatomic) BOOL isKeysPointer;
@property (readonly, nonatomic) BOOL isStorageBitmapPointer;
@property (readonly, nonatomic) BOOL isStorageImplPointer;
@property (readonly, nonatomic) BOOL isValueField;
@property (readonly, nonatomic) BOOL isValuesPointer;
@property (readonly, nonatomic) NSString *ivarName; // ivar: _ivarName
@property (readonly) unsigned int kind;
@property (readonly) unsigned int offset; // ivar: _offset
@property (readonly, nonatomic) NSArray *possibleEnumPayloadFieldArray;
@property (readonly) unsigned int scanType; // ivar: _scanType
@property (readonly) unsigned int scannableSize; // ivar: _scannable
@property (readonly) unsigned int size; // ivar: _size
@property (readonly) unsigned int stride; // ivar: _stride
@property (readonly, nonatomic) NSArray *subFieldArray;
@property (readonly) *void swiftTyperef; // ivar: _swiftTyperef
@property (readonly, nonatomic) NSString *typeName; // ivar: _typeName
@property (readonly, nonatomic) BOOL typeNameMayDescribeReferencedAllocation;
@property (readonly) NSString *typedDescription;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_fullIvarNameAtOffset:(unsigned int)arg0 leafOffset:(*unsigned int)arg1 depth:(unsigned int)arg2 ;
-(id)description;
-(id)descriptionOfFieldValueInObjectMemory:(*void)arg0 scanner:(id)arg1 ;
-(id)fullIvarNameAtOffset:(unsigned int)arg0 ;
-(id)getLeafFieldAtOffset:(unsigned int)arg0 leafOffset:(*unsigned int)arg1 ;
-(id)initStorageEntryFieldWithName:(id)arg0 type:(id)arg1 kind:(unsigned int)arg2 scan:(unsigned int)arg3 offset:(unsigned int)arg4 size:(unsigned int)arg5 stride:(unsigned int)arg6 subFieldArray:(id)arg7 ;
-(id)initStorageInfoFieldWithName:(id)arg0 type:(id)arg1 kind:(unsigned int)arg2 scan:(unsigned int)arg3 offset:(unsigned int)arg4 size:(unsigned int)arg5 stride:(unsigned int)arg6 subFieldArray:(id)arg7 ;
-(id)initSwiftEnumPayloadFieldWithName:(id)arg0 type:(id)arg1 kind:(unsigned int)arg2 scan:(unsigned int)arg3 offset:(unsigned int)arg4 size:(unsigned int)arg5 stride:(unsigned int)arg6 possibleEnumSubFieldArray:(id)arg7 swiftTyperef:(*void)arg8 ;
-(id)initWithName:(id)arg0 type:(id)arg1 kind:(unsigned int)arg2 scan:(unsigned int)arg3 offset:(unsigned int)arg4 size:(unsigned int)arg5 stride:(unsigned int)arg6 subFieldArray:(id)arg7 swiftTyperef:(*void)arg8 ;
-(id)initWithName:(id)arg0 type:(id)arg1 scan:(unsigned int)arg2 offset:(unsigned int)arg3 size:(unsigned int)arg4 ;
-(id)initWithObjcIvar:(struct objc_ivar *)arg0 size:(unsigned int)arg1 offset:(unsigned int)arg2 ivarName:(char *)arg3 isARC:(BOOL)arg4 is64Bit:(BOOL)arg5 ;
-(id)initWithSerializer:(id)arg0 classMap:(id)arg1 version:(unsigned int)arg2 error:(*id)arg3 ;
-(id)initWithSerializer:(id)arg0 classMap:(id)arg1 version:(unsigned int)arg2 returnedDestinationLayoutClassInfoIndex:(*unsigned int)arg3 error:(*id)arg4 ;
-(id)mutableCopy;
-(void)dealloc;
-(void)initializeSubFieldArray;
-(void)serializeWithClassMap:(id)arg0 simpleSerializer:(id)arg1 version:(unsigned int)arg2 ;


@end


#endif