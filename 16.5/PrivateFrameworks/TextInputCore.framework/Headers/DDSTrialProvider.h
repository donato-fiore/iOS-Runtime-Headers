// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSTRIALPROVIDER_H
#define DDSTRIALPROVIDER_H

@class NSString;
@protocol DDSTrialProvider;

#import <Foundation/Foundation.h>


@interface DDSTrialProvider : NSObject <DDSTrialProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contentItemsFromAssets:(id)arg0 matchingFilter:(id)arg1 ;
-(void)fetchTrialAssetForQuery:(id)arg0 callback:(id)arg1 ;
-(void)registerDelegate:(id)arg0 ;
-(void)setUpTrialForQuery:(id)arg0 ;
-(void)unregisterDelegate:(id)arg0 ;


@end


#endif