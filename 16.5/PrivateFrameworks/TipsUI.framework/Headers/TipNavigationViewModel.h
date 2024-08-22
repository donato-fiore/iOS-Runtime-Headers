// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIPNAVIGATIONVIEWMODEL_H
#define TIPNAVIGATIONVIEWMODEL_H

@class TPSTip, NSArray;

#import <Foundation/Foundation.h>


@interface TipNavigationViewModel : NSObject {
    ? _currentTip;
    ? _tips;
}


@property (nonatomic, readonly) BOOL canGoBack;
@property (nonatomic, readonly) BOOL canGoNext;
@property (nonatomic, retain) TPSTip *currentTip;
@property (nonatomic, readonly) NSInteger currentTipIndex;
@property (nonatomic, copy) NSArray *tips;


-(id)init;
-(void)goBack;
-(void)goNext;
-(void)selectTipAtIndex:(NSInteger)arg0 ;


@end


#endif