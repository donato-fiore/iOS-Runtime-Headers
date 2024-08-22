// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTEVENTTRACKERMANAGER_H
#define VTEVENTTRACKERMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTEventTrackerManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_contentsOfDirectoryAtURL:(id)arg0 matchingPattern:(id)arg1 includingPropertiesForKeys:(id)arg2 error:(*id)arg3 ;
-(id)_contentsOfDirectoryAtURL:(id)arg0 matchingPattern:(id)arg1 sortedByDateWithResourceKey:(id)arg2 error:(*id)arg3 ;
-(id)_dictionaryToJson:(id)arg0 ;
-(id)_sortedURLsInDirectory:(id)arg0 matchingPattern:(id)arg1 ;
-(id)init;
-(void)voiceTriggerEvent:(id)arg0 ;


@end


#endif