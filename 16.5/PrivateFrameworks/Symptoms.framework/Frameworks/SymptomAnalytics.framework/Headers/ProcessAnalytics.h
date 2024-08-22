// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PROCESSANALYTICS_H
#define PROCESSANALYTICS_H



#import "ObjectAnalytics.h"

@interface ProcessAnalytics : ObjectAnalytics



-(id)init;
-(id)initWithWorkspace:(id)arg0 withCache:(BOOL)arg1 ;
-(id)processesFromDate:(id)arg0 untilDate:(id)arg1 ;
-(id)processesWithName:(id)arg0 nameKind:(id)arg1 ;
-(id)processesWithNameInSet:(id)arg0 nameKind:(id)arg1 ;


@end


#endif