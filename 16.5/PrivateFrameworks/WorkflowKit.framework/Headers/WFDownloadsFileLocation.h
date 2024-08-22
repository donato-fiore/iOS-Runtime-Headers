// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDOWNLOADSFILELOCATION_H
#define WFDOWNLOADSFILELOCATION_H



#import "WFFileProviderLocation.h"

@interface WFDownloadsFileLocation : WFFileProviderLocation



+(BOOL)canRepresentURL:(id)arg0 item:(id)arg1 parentItems:(id)arg2 ;
+(id)subpathFromURL:(id)arg0 item:(id)arg1 ;
-(BOOL)isSupportedOnCurrentPlatform;
-(BOOL)shouldShowUsersDuringDisplay:(id)arg0 ;
-(id)resolveLocationWithError:(*id)arg0 ;


@end


#endif