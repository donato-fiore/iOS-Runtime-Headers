// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RWIAUTOMATICINSPECTIONSESSION_H
#define _RWIAUTOMATICINSPECTIONSESSION_H

@class NSNumber, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _RWIAutomaticInspectionSession : NSObject {
    NSNumber *_pageId;
    NSString *_applicationIdentifier;
    NSUInteger _currentDebuggerIndex;
}


@property (readonly, copy, nonatomic) NSArray *debuggers; // ivar: _debuggers
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)matchesPageId:(id)arg0 applicationIdentifier:(id)arg1 ;
-(BOOL)receivedRejectResponse;
-(id)initWithPageId:(id)arg0 applicationIdentifier:(id)arg1 debuggers:(id)arg2 ;
-(void)_sendQuery;
-(void)start;


@end


#endif