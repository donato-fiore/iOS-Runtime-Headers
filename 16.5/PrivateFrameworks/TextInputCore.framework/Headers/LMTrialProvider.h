// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LMTRIALPROVIDER_H
#define LMTRIALPROVIDER_H

@class NSString;
@protocol LMTrialProvider;

#import <Foundation/Foundation.h>


@interface LMTrialProvider : NSObject <LMTrialProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy) id *updateCallback; // ivar: _updateCallback


-(id)encodedTrialParametersForLocale:(id)arg0 ;
-(void)handleLMTrialParametersDidChangeNotification:(id)arg0 ;
-(void)registerUpdateCallback:(id)arg0 ;


@end


#endif