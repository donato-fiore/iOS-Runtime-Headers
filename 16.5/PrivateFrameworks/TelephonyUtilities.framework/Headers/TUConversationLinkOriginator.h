// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONLINKORIGINATOR_H
#define TUCONVERSATIONLINKORIGINATOR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUHandle.h"

@interface TUConversationLinkOriginator : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) TUHandle *handle; // ivar: _handle
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger revision; // ivar: _revision


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationLinkOriginator:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 revision:(NSInteger)arg1 handle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif