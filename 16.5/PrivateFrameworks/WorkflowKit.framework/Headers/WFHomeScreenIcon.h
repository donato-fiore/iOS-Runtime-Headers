// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHOMESCREENICON_H
#define WFHOMESCREENICON_H

@class NSData, WFWorkflowIcon;

#import <Foundation/Foundation.h>


@interface WFHomeScreenIcon : NSObject

@property (readonly, nonatomic) NSData *customImageData; // ivar: _customImageData
@property (readonly, nonatomic) WFWorkflowIcon *workflowIcon; // ivar: _workflowIcon


-(id)initWithWorkflowIcon:(id)arg0 customImageData:(id)arg1 ;


@end


#endif