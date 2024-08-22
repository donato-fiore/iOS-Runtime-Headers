// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUNAVIGATIONMENU_H
#define SUNAVIGATIONMENU_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUNavigationMenu : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *cancelTitle; // ivar: _cancelTitle
@property (readonly, nonatomic) NSString *closedTitle; // ivar: _closedTitle
@property (readonly, nonatomic) NSInteger initialSelectedIndex; // ivar: _initialSelectedIndex
@property (nonatomic) NSInteger location; // ivar: _location
@property (readonly, nonatomic) NSArray *menuItems; // ivar: _menuItems
@property (readonly, nonatomic) NSArray *navigationButtons; // ivar: _navigationButtons
@property (readonly, nonatomic) NSString *openTitle; // ivar: _openTitle


-(NSInteger)_locationForString:(id)arg0 ;
-(id)_newMenuItemsFromArray:(id)arg0 ;
-(id)_newNavigationButtonsFromArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)navigationButtonForLocation:(id)arg0 ;
-(void)_loadFromDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif