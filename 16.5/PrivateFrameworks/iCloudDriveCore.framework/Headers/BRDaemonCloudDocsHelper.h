// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRDAEMONCLOUDDOCSHELPER_H
#define BRDAEMONCLOUDDOCSHELPER_H

@class NSString;
@protocol BRCloudDocsHelper;

#import <Foundation/Foundation.h>


@interface BRDaemonCloudDocsHelper : NSObject <BRCloudDocsHelper>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)queryPathsForPersona:(id)arg0 withError:(*id)arg1 ;


@end


#endif