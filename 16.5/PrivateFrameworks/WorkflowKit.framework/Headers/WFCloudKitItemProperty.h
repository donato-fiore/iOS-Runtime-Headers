// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCLOUDKITITEMPROPERTY_H
#define WFCLOUDKITITEMPROPERTY_H

@class WFFileType, NSString, NSValue;

#import <Foundation/Foundation.h>


@interface WFCloudKitItemProperty : NSObject

@property (readonly, nonatomic) id *constantValue; // ivar: _constantValue
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted; // ivar: _encrypted
@property (readonly, nonatomic) WFFileType *fileType; // ivar: _fileType
@property (readonly, nonatomic) BOOL hasConstantValue; // ivar: _hasConstantValue
@property (readonly, nonatomic, getter=isIgnoredByDefault) BOOL ignoredByDefault; // ivar: _ignoredByDefault
@property (readonly, nonatomic) Class itemClass; // ivar: _itemClass
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSValue *nilValue; // ivar: _nilValue
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)assetPropertyWithName:(id)arg0 ;
+(id)assetPropertyWithName:(id)arg0 fileType:(id)arg1 ;
+(id)assetPropertyWithName:(id)arg0 fileType:(id)arg1 ignoredByDefault:(BOOL)arg2 encrypted:(BOOL)arg3 ;
+(id)itemPropertyWithName:(id)arg0 itemClass:(Class)arg1 ;
+(id)itemReferencePropertyWithName:(id)arg0 itemClass:(Class)arg1 ;
+(id)objectPropertyWithName:(id)arg0 ;
+(id)objectPropertyWithName:(id)arg0 constantValue:(id)arg1 ;
+(id)objectPropertyWithName:(id)arg0 constantValue:(id)arg1 encrypted:(BOOL)arg2 ;
+(id)objectPropertyWithName:(id)arg0 ignoredByDefault:(BOOL)arg1 encrypted:(BOOL)arg2 ;
+(id)scalarPropertyWithName:(id)arg0 constantValue:(id)arg1 ;
+(id)scalarPropertyWithName:(id)arg0 nilValue:(id)arg1 ;
+(id)scalarPropertyWithName:(id)arg0 nilValue:(id)arg1 ignoredByDefault:(BOOL)arg2 encrypted:(BOOL)arg3 ;
-(id)initWithType:(NSUInteger)arg0 name:(id)arg1 itemClass:(Class)arg2 ignoredByDefault:(BOOL)arg3 nilValue:(id)arg4 hasConstantValue:(BOOL)arg5 constantValue:(id)arg6 fileType:(id)arg7 encrypted:(BOOL)arg8 ;


@end


#endif