/* Generated by RuntimeBrowser.
 */

@protocol ABPersonTableViewDataSourceDelegate <NSObject>

@required

- (<ABPersonEditDelegate> *)editDelegate;
- (bool)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(ABPersonTableViewDataSource *)arg1;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 addNonScrollableHeaderView:(UIView *)arg2 animated:(bool)arg3;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 conference:(id)arg2 person:(ABUIPerson *)arg3 property:(int)arg4 identifier:(int)arg5;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 didBeginEditingProperty:(int)arg2;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 didDismissActionSheet:(UIActionSheet *)arg2;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 didFinishEditingProperty:(int)arg2;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 didUpdateValueForProperty:(int)arg2;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 dismissDatePickerViewController:(ABDatePickerViewController *)arg2;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 presentActionSheet:(UIActionSheet *)arg2 fromView:(UIView *)arg3;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 presentDatePickerViewController:(ABDatePickerViewController *)arg2 fromView:(UIView *)arg3 passthroughViews:(NSArray *)arg4 forIndexPath:(NSIndexPath *)arg5;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 presentPickerViewController:(ABPickerViewController *)arg2 fromView:(UIView *)arg3 forIndexPath:(NSIndexPath *)arg4;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 pushLinkedCardAtRow:(long long)arg2;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 removeNonScrollableHeaderViewAnimated:(bool)arg2;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(ABPropertyGroup *)arg3 entryType:(int)arg4;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 selectedCallActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(ABPropertyGroup *)arg3;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 selectedImageForEditing:(bool)arg2;
- (bool)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 selectedPropertyAtIndex:(long long)arg2 inPropertyGroup:(ABPropertyGroup *)arg3 withMemberCell:(UIView *)arg4 forEditing:(bool)arg5;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 selectedSMSActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(ABPropertyGroup *)arg3;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 shareContact:(id)arg2;
- (bool)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 shouldShowAction:(ABPersonTableAction *)arg2;
- (void)personTableViewDataSource:(ABPersonTableViewDataSource *)arg1 willUpdateForEditing:(bool)arg2;
- (void)personTableViewDataSourceDidReloadData:(ABPersonTableViewDataSource *)arg1;
- (void)personTableViewDataSourceDidSwipeToDelete:(ABPersonTableViewDataSource *)arg1;
- (void)personTableViewDataSourceHeaderHeightDidChange:(ABPersonTableViewDataSource *)arg1;
- (double)personTableViewDataSourceHeaderPadding:(ABPersonTableViewDataSource *)arg1;
- (bool)personTableViewDataSourceIsInPopover:(ABPersonTableViewDataSource *)arg1;
- (bool)personTableViewDataSourceIsLocation:(ABPersonTableViewDataSource *)arg1;
- (void)personTableViewDataSourceSelectedAddToContacts:(ABPersonTableViewDataSource *)arg1;
- (void)personTableViewDataSourceSelectedDeletePerson:(ABPersonTableViewDataSource *)arg1;
- (void)personTableViewDataSourceShouldIgnoreNextLocalChange:(ABPersonTableViewDataSource *)arg1;
- (bool)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(ABPersonTableViewDataSource *)arg1;
- (bool)personTableViewDataSourceShouldShowContactSources:(ABPersonTableViewDataSource *)arg1;
- (bool)personTableViewDataSourceShouldShowHeader:(ABPersonTableViewDataSource *)arg1;
- (bool)personTableViewDataSourceShouldShowLinkedPeople:(ABPersonTableViewDataSource *)arg1;
- (void)personTableViewDataSourceWillPresentDatePickerViewController:(ABPersonTableViewDataSource *)arg1;
- (void)presentLinkingPeoplePickerForPersonTableViewDataSource:(ABPersonTableViewDataSource *)arg1;
- (bool)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1;
- (void)setEditDelegate:(id <ABPersonEditDelegate>)arg1;
- (void)tableView:(UITableView *)arg1 didEndEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginEditingRowAtIndexPath:(NSIndexPath *)arg2;

@end
