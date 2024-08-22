// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSSTATUSBARTAPCONTEXTIMPL_H
#define SBSSTATUSBARTAPCONTEXTIMPL_H

@protocol NSSecureCoding, SBSStatusBarTapContext;

#import <Foundation/Foundation.h>


@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext>



@property (nonatomic) NSUInteger styleOverride; // ivar: _styleOverride


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyleOverride:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif