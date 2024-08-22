// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFABSOLUTEPATHFILELOCATION_H
#define WFABSOLUTEPATHFILELOCATION_H



#import "WFFilePathLocation.h"

@interface WFAbsolutePathFileLocation : WFFilePathLocation



+(BOOL)canRepresentURL:(id)arg0 ;
+(id)subpathFromURL:(id)arg0 ;
-(BOOL)isSupportedOnCurrentPlatform;
-(BOOL)shouldShowUsersDuringDisplay:(id)arg0 ;
-(id)resolveLocationWithError:(*id)arg0 ;


@end


#endif