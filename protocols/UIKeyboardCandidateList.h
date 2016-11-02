/* Generated by RuntimeBrowser.
 */

@protocol UIKeyboardCandidateList <NSObject>

@required

- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (TIKeyboardCandidate *)currentCandidate;
- (unsigned long long)currentIndex;
- (bool)hasCandidates;
- (bool)isExtendedList;
- (TIKeyboardBehaviors *)keyboardBehaviors;
- (unsigned long long)selectedSortIndex;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 inlineText:(NSString *)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setUIKeyboardCandidateListDelegate:(id <UIKeyboardCandidateListDelegate>)arg1;
- (bool)showCandidate:(TIKeyboardCandidate *)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (NSString *)statisticsIdentifier;

@optional

- (TIKeyboardCandidateResultSet *)candidates;
- (void)candidatesDidChange;
- (bool)handleNumberKey:(unsigned long long)arg1;
- (bool)handleTabKeyWithShift:(bool)arg1;
- (bool)hasNextPage;
- (bool)hasPreviousPage;
- (NSString *)inlineText;
- (void)jumpToCompositions;
- (void)revealHiddenCandidates;
- (TIKeyboardSecureCandidateRenderTraits *)secureCandidateRenderTraits;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 type:(int)arg2 inlineText:(NSString *)arg3 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxX:(double)arg5 layout:(bool)arg6;
- (void)setCompletionContext:(NSString *)arg1;
- (void)setInlineText:(NSString *)arg1;
- (void)showCaret:(bool)arg1 gradually:(bool)arg2;
- (unsigned long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;

@end
