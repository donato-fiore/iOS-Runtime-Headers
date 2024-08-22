// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCALLMODEL_H
#define TUCALLMODEL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUCallModel : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL supportsAddCall; // ivar: _supportsAddCall
@property (nonatomic) BOOL supportsDTMF; // ivar: _supportsDTMF
@property (nonatomic) BOOL supportsGrouping; // ivar: _supportsGrouping
@property (nonatomic) BOOL supportsHolding; // ivar: _supportsHolding
@property (nonatomic) BOOL supportsSendingToVoicemail; // ivar: _supportsSendingToVoicemail
@property (nonatomic) BOOL supportsUnambiguousMultiPartyState; // ivar: _supportsUnambiguousMultiPartyState
@property (nonatomic) BOOL supportsUngrouping; // ivar: _supportsUngrouping


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif