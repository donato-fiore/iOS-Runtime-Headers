// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKRADARUTILITIES_H
#define VKRADARUTILITIES_H


#import <Foundation/Foundation.h>


@interface VKRadarUtilities : NSObject



+(void)createRadarWithTitle:(id)arg0 description:(id)arg1 componentName:(id)arg2 componentVersion:(id)arg3 componentID:(id)arg4 ;
+(void)createRadarWithTitle:(id)arg0 description:(id)arg1 componentName:(id)arg2 componentVersion:(id)arg3 componentID:(id)arg4 keywordIDs:(id)arg5 attachmentURLs:(id)arg6 includeSysdiagnose:(BOOL)arg7 ;
+(void)promptUserToFileBugWithAlertMessage:(id)arg0 bugTitle:(id)arg1 bugDescription:(id)arg2 ;


@end


#endif