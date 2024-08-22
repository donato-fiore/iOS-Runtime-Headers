// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFUIKITACTIONINTERFACEREQUEST_H
#define WFUIKITACTIONINTERFACEREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFUIKitActionInterfaceRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *actionClassName; // ivar: _actionClassName
@property (readonly, nonatomic) CGSize presentationSize; // ivar: _presentationSize
@property (readonly, nonatomic) NSString *userInterfaceClassName; // ivar: _userInterfaceClassName


+(BOOL)supportsSecureCoding;
-(id)initWithActionClassName:(id)arg0 userInterfaceClassName:(id)arg1 presentationSize:(struct CGSize )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif