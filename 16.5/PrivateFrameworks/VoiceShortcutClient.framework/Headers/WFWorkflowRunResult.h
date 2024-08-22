// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWRUNRESULT_H
#define WFWORKFLOWRUNRESULT_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFWorkflowRunResult : NSObject <NSSecureCoding>

 {
    NSError *_internalError;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSError *error;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)resultBySettingError:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif