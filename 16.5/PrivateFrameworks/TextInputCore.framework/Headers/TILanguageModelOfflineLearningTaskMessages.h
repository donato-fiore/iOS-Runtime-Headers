// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGTASKMESSAGES_H
#define TILANGUAGEMODELOFFLINELEARNINGTASKMESSAGES_H

@protocol TILinguisticDataSource;


#import "TILanguageModelOfflineLearningTask.h"

@interface TILanguageModelOfflineLearningTaskMessages : TILanguageModelOfflineLearningTask {
    id<TILinguisticDataSource> *_dataSource;
}




+(id)dataSourceForTask;
-(id)dataSource;
-(id)initWithClientIdentifier:(id)arg0 oneTimeTask:(BOOL)arg1 ;


@end


#endif