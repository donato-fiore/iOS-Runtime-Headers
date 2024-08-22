// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBRESTARTMANAGERWORKSPACEDATASOURCE_H
#define SBRESTARTMANAGERWORKSPACEDATASOURCE_H

@class NSString;
@protocol SBRestartManagerWorkspaceDataSource;

#import <Foundation/Foundation.h>


@interface SBRestartManagerWorkspaceDataSource : NSObject <SBRestartManagerWorkspaceDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isUILocked;
-(id)activePrimaryApplicationBundleID;
-(void)terminateAllApplicationsForReason:(NSInteger)arg0 description:(id)arg1 completion:(id)arg2 ;


@end


#endif