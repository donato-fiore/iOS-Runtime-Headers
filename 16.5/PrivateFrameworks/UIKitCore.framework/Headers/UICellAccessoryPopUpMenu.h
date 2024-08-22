// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICELLACCESSORYPOPUPMENU_H
#define UICELLACCESSORYPOPUPMENU_H



#import "UICellAccessory.h"
#import "UIMenu.h"

@interface UICellAccessoryPopUpMenu : UICellAccessory

@property (readonly, nonatomic) UIMenu *_internalMenu;
@property (readonly, copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (copy, nonatomic) id *selectedElementDidChangeHandler; // ivar: _selectedElementDidChangeHandler


+(BOOL)supportsSecureCoding;
-(BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_systemType;
-(NSInteger)_systemTypePlacementForHeader:(BOOL)arg0 ;
-(NSUInteger)hash;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMenu:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif