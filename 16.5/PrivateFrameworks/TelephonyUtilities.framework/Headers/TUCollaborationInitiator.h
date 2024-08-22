// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCOLLABORATIONINITIATOR_H
#define TUCOLLABORATIONINITIATOR_H

@class NSString, NSPersonNameComponents;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUCollaborationInitiator : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNameComponents:(id)arg0 handle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif