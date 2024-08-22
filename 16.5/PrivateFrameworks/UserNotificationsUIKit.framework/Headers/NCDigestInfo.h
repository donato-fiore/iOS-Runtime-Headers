// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCDIGESTINFO_H
#define NCDIGESTINFO_H

@class NSString, NSDate, NSDateComponents;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NCDigestInfo : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger deliveryOrder; // ivar: _deliveryOrder
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *headerString; // ivar: _headerString
@property (readonly, copy, nonatomic) NSDate *scheduleDate; // ivar: _scheduleDate
@property (readonly, copy, nonatomic) NSDateComponents *scheduleTime; // ivar: _scheduleTime
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *titleString; // ivar: _titleString


-(BOOL)isEqual:(id)arg0 ;
-(id)_stringForDeliveryOrder:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDigestInfo:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif