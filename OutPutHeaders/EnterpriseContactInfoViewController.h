/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "MMUIViewController.h"
#import "IEnterpriseGroupMgrExt.h"
#import "MMWebViewDelegate.h"
#import "EnterpriseMemberViewDelegate.h"

@class NSMutableArray, MMTableViewInfo, NSString, MMTitleView, CEnterpriseContact;

@interface EnterpriseContactInfoViewController : MMUIViewController <EnterpriseMemberViewDelegate, MMWebViewDelegate, WCActionSheetDelegate, IEnterpriseGroupMgrExt> {
	CEnterpriseContact* _enterpriseContact;
	NSString* _myUserName;
	NSMutableArray* _memberDataItemList;
	NSMutableArray* _memberViewList;
	BOOL _isMuteChanged;
	BOOL _isFavoriteChanged;
	BOOL _isChatStatusNotifyOpen;
	BOOL _isFavorite;
	BOOL _isSessionTop;
	BOOL _isDeleteButtonHidden;
	MMTitleView* _titleView;
	MMTableViewInfo* _tableViewInfo;
	unsigned long _colCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onUpdateEnterpriseGroupName:(id)name errorCode:(int)code;
-(void)onUpdateEnterpriseGroupMemberList:(id)list errorCode:(int)code;
-(void)onCreateEnterpriseGroup:(id)group errorCode:(int)code extDic:(id)dic;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onWebViewWillClose:(id)onWebView;
-(void)onEnterpriseMemberViewAdd:(id)add;
-(void)onEnterpriseMemberViewDelete:(id)aDelete;
-(void)onEnterpriseMemberHeadImageLongPress:(id)press;
-(void)onEnterpriseMemberHeadImageClick:(id)click;
-(BOOL)isContactInRoomMember:(id)roomMember;
-(void)switchDeleteButtonHidden;
-(void)updateDeleteButtonHidden:(BOOL)hidden;
-(void)resetDeleteButtonHidden;
-(void)enterEnterpriseChat:(id)chat;
-(void)updateContactSetting;
-(void)setTopStatus:(id)status;
-(void)setFavStatus:(id)status;
-(void)setMuteStatus:(id)status;
-(void)setGroupName:(id)name;
-(void)openEditTitle;
-(void)quitChatRoom;
-(void)onQuitButtonClicked:(id)clicked;
-(void)makeMemberCell:(id)cell CellInfo:(id)info;
-(id)makeMemberListSection;
-(id)makeSettingSection;
-(id)makeChatRoomSection;
-(void)reloadTableViewInfo;
-(void)updateTableFooterView;
-(void)updateTitleView;
-(void)viewDidTransitionToNewSize;
-(void)viewDidLoad;
-(void)initView;
-(void)initTableViewInfo;
-(void)initTitleView;
-(void)initData;
-(void)dealloc;
-(id)initWithEnterpriseContact:(id)enterpriseContact;
@end

