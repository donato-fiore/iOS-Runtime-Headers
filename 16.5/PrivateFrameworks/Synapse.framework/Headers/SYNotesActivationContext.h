// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYNOTESACTIVATIONCONTEXT_H
#define SYNOTESACTIVATIONCONTEXT_H

@class BSProcessHandle, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SYNotesActivationContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned int contextID; // ivar: _contextID
@property (readonly, nonatomic) BSProcessHandle *processHandle; // ivar: _processHandle
@property (readonly, nonatomic) NSUInteger renderID; // ivar: _renderID
@property (readonly, copy, nonatomic) NSData *userActivityData; // ivar: _userActivityData


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserActivityData:(id)arg0 contextID:(unsigned int)arg1 renderID:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif