// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIDPBIOMEREPORTINGDELEGATE_H
#define TIDPBIOMEREPORTINGDELEGATE_H

@class BMSource, NSString;
@protocol TIDPReportingDelegate;

#import <Foundation/Foundation.h>


@interface TIDPBiomeReportingDelegate : NSObject <TIDPReportingDelegate>

 {
    BMSource *_source;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_BMEventWithKeyboardTokenFrequency:(id)arg0 withLocale:(id)arg1 withTokenType:(id)arg2 ;
-(BOOL)record:(id)arg0 ;
-(BOOL)recordTokenFrequency:(id)arg0 withLocale:(id)arg1 withTokenType:(id)arg2 ;
-(id)init;


@end


#endif