/*
 * InstrumentSelector.h
 *
 *  Created on: 27 Dec 2016
 *      Author: jeremy
 */

#ifndef SOURCE_WIDGETS_INSTRUMENTSELECTOR_H_
#define SOURCE_WIDGETS_INSTRUMENTSELECTOR_H_

#include <gtkmm/grid.h>
#include <gtkmm/label.h>
#include <gtkmm/button.h>

#include <string>

namespace Widgets
{

	class InstrumentSelector : public Gtk::Grid
	{

	public:

		explicit InstrumentSelector(const std::string& name);
		virtual ~InstrumentSelector() = default;

		void SetInstrumentName(const std::string& name) { instrumentName.set_text(name); }

		Gtk::Button& GetPreferencesButton() { return preferencesButton; }
		Gtk::Button& GetDeleteButton() { return deleteButton; }

	private:

		Gtk::Label instrumentName;
		Gtk::Button preferencesButton;
		Gtk::Button deleteButton;

	};

	typedef std::shared_ptr<InstrumentSelector> InstrumentSelectorPtr;

} /* namespace Widgets */

#endif /* SOURCE_WIDGETS_INSTRUMENTSELECTOR_H_ */
