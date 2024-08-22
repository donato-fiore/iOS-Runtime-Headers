// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSTONEPURCHASE_H
#define SSTONEPURCHASE_H

@class NSArray, NSNumber, NSString;
@protocol SSXPCCoding, NSSecureCoding, NSCopying;


#import "SSPurchase.h"

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSSecureCoding, NSCopying>

 {
    NSArray *_allowedToneStyles;
    NSNumber *_assigneeIdentifier;
    NSString *_assigneeContactIdentifier;
    NSString *_assigneeToneStyle;
    BOOL _shouldMakeDefaultRingtone;
    BOOL _shouldMakeDefaultTextTone;
}


@property (copy) NSArray *allowedToneStyles;
@property (retain) NSString *assigneeContactIdentifier;
@property (retain) NSNumber *assigneeIdentifier;
@property (copy) NSString *assigneeToneStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL shouldMakeDefaultRingtone;
@property BOOL shouldMakeDefaultTextTone;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 offer:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_addEntriesToDatabaseEncoding:(id)arg0 ;
-(void)_setValuesUsingDatabaseEncoding:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif