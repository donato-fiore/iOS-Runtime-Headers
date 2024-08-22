// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBIOMETRICSTOKENUPDATETASKSHIM_H
#define AMSBIOMETRICSTOKENUPDATETASKSHIM_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface AMSBiometricsTokenUpdateTaskShim : NSObject

@property (retain, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier


-(id)initWithAccountIdentifier:(id)arg0 ;
-(void)runUpdateWithCompletionBlock:(id)arg0 ;


@end


#endif