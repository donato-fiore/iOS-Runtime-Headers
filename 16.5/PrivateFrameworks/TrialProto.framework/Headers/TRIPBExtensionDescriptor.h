// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBEXTENSIONDESCRIPTOR_H
#define TRIPBEXTENSIONDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRIPBEnumDescriptor.h"

@interface TRIPBExtensionDescriptor : NSObject <NSCopying>

 {
    *TRIPBExtensionDescription description_;
    NSData""valueString"@"NSString""valueMessage"@"TRIPBMessage""valueEnum"i defaultValue_;
}


@property (readonly, nonatomic) int alternateWireType;
@property (readonly, nonatomic) Class containingMessageClass; // ivar: containingMessageClass_
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) id *defaultValue;
@property (readonly, nonatomic) TRIPBEnumDescriptor *enumDescriptor;
@property (readonly, nonatomic) unsigned int fieldNumber;
@property (readonly, nonatomic) Class msgClass;
@property (readonly, nonatomic, getter=isPackable) BOOL packable;
@property (readonly, nonatomic, getter=isRepeated) BOOL repeated;
@property (readonly, nonatomic) NSString *singletonName;
@property (readonly, nonatomic) int wireType;


-(NSInteger)compareByFieldNumber:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithExtensionDescription:(struct TRIPBExtensionDescription *)arg0 ;
-(void)dealloc;


@end


#endif