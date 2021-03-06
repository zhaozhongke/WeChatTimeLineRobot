/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PasswordLogicDelegate.h"
#import "LongPressMenuViewDelegate.h"
#import "LongPressViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCAddressBaseViewController.h"

@class PasswordLogic, UIView, NSString;
@protocol WCAddressListViewControllerDelegate;

@interface WCAddressListViewController : WCAddressBaseViewController <UIAlertViewDelegate, PasswordLogicDelegate, LongPressMenuViewDelegate, LongPressViewDelegate> {
	id<WCAddressListViewControllerDelegate> m_delegate;
	PasswordLogic* m_passwordLogic;
	int m_enWCAddressAddressListScene;
	UIView* m_oLastLongPressView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)MenuControllerWillHide:(id)menuController;
-(void)OnLongPress:(id)press;
-(void)OnPress:(id)press;
-(void)onLongPressMenuViewCopy:(id)copy;
-(void)setDelegate:(id)delegate;
-(void)accessoryButtonTappedForRowWithIndexPath:(id)indexPath Cell:(id)cell;
-(void)commitEditingForRowAtIndexPath:(id)indexPath Cell:(id)cell;
-(void)selectActionCell:(id)cell;
-(void)makeCell:(id)cell cellInfo:(id)info;
-(void)makeNewCell:(id)cell cellInfo:(id)info;
-(void)makeImportYiXunCell:(id)cell cellInfo:(id)info;
-(void)removeFooterView;
-(void)createFooterView;
-(void)refreshViewWithData:(id)data;
-(void)resetDefautSelect;
-(float)getCellHeightForAddress:(id)address;
-(id)getAddressCopyedString:(id)string;
-(id)getAddressDetailString:(id)string;
-(void)verifyPasswordFail;
-(void)verifyPasswordOK:(id)ok;
-(void)startImportYiXunAddress:(BOOL)address;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)showImportYiXunAddressView;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)onNext;
-(void)reloadAddressList:(int)list;
-(void)initNavigationBar;
-(void)initPasswordLogic;
@end

