// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFWEBCLIPSANITATIONREPORT_H
#define SBFWEBCLIPSANITATIONREPORT_H

@class NSError, UIWebClip;

#import <Foundation/Foundation.h>


@interface SBFWebClipSanitationReport : NSObject

@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger result; // ivar: _result
@property (readonly, nonatomic) UIWebClip *webClip; // ivar: _webClip


-(id)description;
-(id)initWithWebClip:(id)arg0 result:(NSInteger)arg1 error:(id)arg2 ;


@end


#endif