// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10WORKFLOWUIP33_7D4FDD99A73E37A1040AFDD4A7DEC40019ADDEDSHORTCUTSCACHE_H
#define _TTC10WORKFLOWUIP33_7D4FDD99A73E37A1040AFDD4A7DEC40019ADDEDSHORTCUTSCACHE_H

@class SwiftObject;
@protocol WFDatabaseResultObserver;



@interface _TtC10WorkflowUIP33_7D4FDD99A73E37A1040AFDD4A7DEC40019AddedShortcutsCache : SwiftObject <WFDatabaseResultObserver>

 {
    ? results;
    ? shortcutNames;
    ? observers;
}




-(void)databaseResultDidChange:(id)arg0 ;


@end


#endif