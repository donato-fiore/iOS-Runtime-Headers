// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPPAGINATEDBODYINFO_H
#define TPPAGINATEDBODYINFO_H



#import "TPBodyInfo.h"

@interface TPPaginatedBodyInfo : TPBodyInfo



-(BOOL)laysOutVertically;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)modelRootIndex;
-(id)nextTargetFirstChildHint;
-(id)nextTargetFirstColumn;
-(id)nextTargetTopicNumberHints;
-(id)pageHint;
-(id)pageInfo;
-(id)previousTargetLastColumn;
-(void)inflateBodyLayout:(id)arg0 ;


@end


#endif