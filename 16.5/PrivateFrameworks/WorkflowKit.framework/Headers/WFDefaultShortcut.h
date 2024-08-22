// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDEFAULTSHORTCUT_H
#define WFDEFAULTSHORTCUT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFDefaultShortcut : NSObject

@property (readonly, nonatomic, getter=isAlwaysVisibleOnWatch) BOOL alwaysVisibleOnWatch;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


+(id)allDefaultShortcuts;
-(NSInteger)relevanceWithContext:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(id)workflowRecordWithError:(*id)arg0 ;


@end


#endif